Repository where I start learning the basic of the C language.

## Windows & VSCodium setup
1. Install extensions from [C/C++ extension pack](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-extension-pack) (**Note:** some of these extensions aren't available on [Open VSX](https://open-vsx.org/) so they have to be downloaded manually from the marketplace and dragged in to extensions tab)
  * clangd is a potential alternative that is available on Open VSX but I haven't tried it yet
2. Use scoop to install [MSYS2](https://www.msys2.org)
3. [Set up Windows Terminal for MSYS2](https://www.msys2.org/docs/terminals/) (**Note:** scoop installs MSYS2 in a different location than the default)
4. Open MINGW64 in Windows Terminal and run `pacman -Syu` to sync the databases and update base packages
5. Install GCC compiler: `pacman -S --needed base-devel mingw-w64-x86_64-toolchain`
6. Add `..\msys64\mingw64\bin` to environment variables path