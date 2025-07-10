```
        _______   ___        __    _____  ___   __   ___  _______   _______   
        |   _  "\ |"  |      |" \  (\"   \|"  \ |/"| /  ")/"     "| /"      \  
        (. |_)  :)||  |      ||  | |.\\   \    |(: |/   /(: ______)|:        | 
        |:     \/ |:  |      |:  | |: \.   \\  ||    __/  \/    |  |_____/   ) 
        (|  _  \\  \  |___   |.  | |.  \    \. |(// _  \  // ___)_  //      /  
        |: |_)  :)( \_|:  \  /\  |\|    \    \ ||: | \  \(:      "||:  __   \  
        (_______/  \_______)(__\_|_)\___|\____\)(__|  \__)\_______)|__|  \___) 
                                                                                                          
                                                                                   
                            D3D11 ImGui External (x86 / x64)
                            EXE / DLL ImGui External Menu
```
Thanks to [adamhlt/ImGui-Standalone](https://github.com/adamhlt/ImGui-Standalone) for the foundation.

---

## ?? Project Overview

This project is a **DirectX 11 External Overlay** using **Dear ImGui**, capable of running in both:
- ?? **EXE (standalone executable) mode**
- ?? **DLL (injectable) mode**

Built to be minimal, clean, and extensible, it can be used for:
- Tooling interfaces
- Debug UIs
- External game or app overlays
- Runtime diagnostics / rendering layers

---

## ? Features

- ? Fully functional **ImGui rendering** on top of any application (windowed)
- ?? **Direct3D 11 backend**
- ??? **Custom overlay rendering** with `ImGui::GetBackgroundDrawList()`
- ?? Example: fullscreen blinking overlay
- ?? Timed events with `std::chrono` (flashing, timers, etc.)
- ?? Works on **x86 and x64**
- ?? Minimal system interaction (perfect for external use)

---

## ??? Requirements

- Visual Studio 2022 or later
- CMake (optional)
- Windows SDK
- ImGui + ImGui DX11/Win32 bindings (included or linked)

---

## ?? How to Build

1. Clone the repository
2. Open the solution or generate it via CMake
3. Build the project (Release x64 or Debug x64)
4. Run or inject depending on mode

---

## ?? Example Behavior

- Press `F2` — Toggle menu
- Press `End` — Exit application
- Checkbox: **Show Overlay**  
  ? Triggers a **blinking fullscreen overlay** every few seconds  
  ? Uses `std::chrono` + `fmod` for timing logic

---

## ?? Structure

| Folder / File       | Description                              |
|---------------------|------------------------------------------|
| `UI.cpp` / `UI.h`   | Window + device + render management      |
| `Drawing.cpp`       | ImGui drawing logic (menu, overlay, etc.) |
| `main.cpp` or `DllMain.cpp` | Entry point (EXE or DLL)               |

---

## ?? Credits

Based on [adamhlt/ImGui-Standalone](https://github.com/adamhlt/ImGui-Standalone)  
and extended for modularity and timed visual behavior.

---



