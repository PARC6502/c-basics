Repository where I start learning the basic of the C language.

## Windows & VSCodium setup
1. Install extensions from [C/C++ extension pack](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-extension-pack) (**Note:** some of these extensions aren't available on [Open VSX](https://open-vsx.org/) so they have to be downloaded manually from the marketplace and dragged in to extensions tab)
  * clangd is a potential alternative that is available on Open VSX but I haven't tried it yet
2. Use scoop to install [MSYS2](https://www.msys2.org)
  * It might be better to just install using the official installer to avoid any potential pitfalls
3. [Set up Windows Terminal for MSYS2](https://www.msys2.org/docs/terminals/) (**Note:** scoop installs MSYS2 in a different location than the default)
4. Open MINGW64 in Windows Terminal and run `pacman -Syu` to sync the databases and update base packages
5. Install GCC compiler: `pacman -S --needed base-devel mingw-w64-x86_64-toolchain`
6. Add `...\msys64\mingw64\bin` to environment variables path
7. Create a symbolic link to `...\mingw64\bin\make.exe` from `...\mingw64\bin\mingw32-make.exe` (you'll probably need to do this from an elevated command prompt). Note that to run the below command you'll need to replace the ellipses with the full path to you `msys2` folder.
    ```
    mklink '...\mingw64\bin\make.exe' '...\mingw64\bin\mingw32-make.exe'
    ```

## Running Makefiles from PowerShell
I've run into some issues running Makefiles from PowerShell.

Currently I've been adding `SHELL=pwsh.exe` to my Makefiles, which seems to work but I'm still trying to figure out where my issues are comming from. 
