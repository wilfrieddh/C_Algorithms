# Tooling

## Compiler

Any GCC, Clang or MSVC Compiler

## IDE: Visual Studio Code

- [Visual Studio Code](https://code.visualstudio.com/)

### VSCode Extensions

- Coding Tools Extension Pack (franneck94)
- C/C++ Extension Pack (franneck94)

## Steps from the video

0. Install VSCode and any MSVC/GCC/Clang Compiler
1. F1 (Command Palette) > Generate C Config Files
2. Copy settings below
3. Paste the copied settings into the **settings.json** file
4. Select folder in the blue status bar down below

### Extra settings (for local .vscode/settings.json file)

```json
  // For Linux
  "C_Cpp_Runner.linkerArgs": [
      "-lm"
  ],
```
