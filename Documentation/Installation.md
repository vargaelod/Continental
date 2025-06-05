# Installation

The aim of this document is to summarize the tools, which are used for this project. Give a guide how to installs the tools, and what versions is used.

I used a Windows machine for set up the project, so I download the Windows version of the tool, but the steps the of installation MacOS or Linux version is the same.

| Tool  | Description              | Version |
|:------|:------------------------:|:-------:|
| MYSYS | Used for compile C++ code | 15.1.0 |
| CMAKE | Manage the build process | 4.0.2 |
| Ninja | build system             | 1.12.1|

## MYSYS2

MYSYS is used as C++ compiler.
1. Navigate to the official site [MYSYS2](https://www.msys2.org).
2. Download the installer: msys2-x86_64-20250221.exe.
3. Follow the installation steps.
4. Add the \msys64\mingw64\bin and \msys64\usr\bin absolute path to system PATH.
5. Check whether the installation was successful. Open a cmd and run:

```
gcc --version
```

You should see this message:
```
g++ (Rev5, Built by MSYS2 project) 15.1.0
Copyright (C) 2025 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

## CMAKE

CMAKE is used as build
1. Navigate to the official site: [CMake](https://cmake.org/download/).
2. Download Windows x64 Installer: cmake-4.0.2-windows-x86_64.msi.
3. Run the installer.
4. Add cmake to system PATH.
5. Check whether the installation was successful. Open a cmd and run:
```
cmake --version
```

You should see this message:
```
cmake version 4.0.2

CMake suite maintained and supported by Kitware (kitware.com/cmake).
```

## ninja
1. Navigate to the release site: [Ninja](https://github.com/ninja-build/ninja/releases)
2. Download ninja-win.zip.
3. Extract it to any folder.
4. Add jinja folder to system PATH.
5. Check whether the installation was successful. Open a cmd and run:
```
jinja --version
```

You should see this message:
```
1.12.1
```

## ETL (Embedded Template Library)
1. Navigate to the release site: [etl](https://github.com/ETLCPP/etl/tree/master)
2. Clone the repo.
3. Copy the include folder into the project root folder:

- ProjectRoot/ETL/