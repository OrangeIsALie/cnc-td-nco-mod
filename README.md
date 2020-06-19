# C&C Tiberian Dawn: New Contruction Options

This is a mod for the remastered version of Tiberian Dawn.

## Features

- Full `rules.ini` support for Tiberian Dawn - all constants are now read from a rules file if present

- Scripting support using `Lua 5.3` - run your code on different menu and in-game events

## Development

**Environment Setup**

- Install Visual Sudio 2019 Community
    - Select `Desktop development with C++` in Installer Options
        - Select `MSVC v141 - VS 2017` option
        - Go to individual components and select `C++/CLI support for v141` option
- Download and install Windows 8.1 SDK from [here](https://developer.microsoft.com/en-us/windows/downloads/sdk-archive)

**Opening the Solution**

- Open `sln` file in Visual Studio
- Select `No Upgrade` for both the Windows SDK and VC++ version prompts (if this appears)
- Build the solution

### Troubleshooting

If you get a COM error when trying to open the solution/project, follow the below steps:

- Close Visual Studio
- Open and admin command prompt
- Run
    ```bat
    regsvr32 %SystemRoot%\System32\msxml3.dll
    regsvr32 %SystemRoot%\SysWOW64\msxml3.dll
    ```
- You should not be able to open the project/solution

