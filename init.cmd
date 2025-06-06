@echo off
setlocal enabledelayedexpansion

set "scriptDir=%~dp0"
set "ETL=!scriptDir!etl"

rem deletete etl library if it is exist
if exist !ETL! (
    rmdir /s /q !ETL!
)

echo *******************************************
echo * Cloning Embedded Template Library (ETL) *
echo *******************************************
git clone --branch 20.41.5 --single-branch https://github.com/ETLCPP/etl.git
