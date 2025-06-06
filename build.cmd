@echo off
setlocal enabledelayedexpansion

set "scriptDir=%~dp0"
set "output_path=!scriptDir!build"

if not exist !output_path! (
    mkdir !output_path!
)
rem Call build command
if "%~1"=="clean" (
    rmdir /s /q !output_path!
) else if "%~1"=="Release" (
    cmake -G "Ninja" -S . -B build/out -DCMAKE_BUILD_TYPE=Release 
) else if "%1"=="Debug" (
   cmake -G "Ninja" -S . -B build/out -DCMAKE_BUILD_TYPE=Debug
) else (
    cmake -G "Ninja" -S . -B build/out
)

cmake --build build/out
