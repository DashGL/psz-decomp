@echo off
REM Phantasy Star Zero (C24E) decomp - one-click build.
REM
REM   build.bat       full gate chain + the normal bootable ROM
REM                   (match\build\PSZERO-built.nds)
REM   build_near.bat  same gates + a second ROM with the parked near-miss
REM                   candidates swapped in live, for in-game testing
REM
REM Every step stops the run on failure, so a finished run means everything
REM green including the byte-identical whole-project link (all 35 modules)
REM and the rebuilt bootable ROM.

setlocal
cd /d "%~dp0"

where python >nul 2>nul
if errorlevel 1 (
    echo [build.bat] python not found on PATH - the gates need python with pyelftools and capstone.
    exit /b 1
)

echo [1/5] audit_all_src - recompile + re-verify every banked file
python tools\probes\audit_all_src.py | findstr /r "PASS FAIL"
if errorlevel 1 goto :fail

echo [2/5] linkcheck - reloc-target verification
python tools\linkcheck.py | findstr /r "LINK-VERIFICATION"
if errorlevel 1 goto :fail

echo [3/5] audit_doclinks - every doc reference resolves
python tools\probes\audit_doclinks.py
if errorlevel 1 goto :fail

echo [4/5] build_all - whole-project delink + relink + byte-compare + ROM build
set PSZ_BUILD_ROM=1
python tools\build_all.py | findstr /r "IDENTICAL MISMATCH WHOLE-PROJECT"
if errorlevel 1 goto :fail

echo [5/5] status - banked vs live set
python tools\status.py

echo.
echo [build.bat] all gates green - bootable ROM at match\build\PSZERO-built.nds
goto :eof

:fail
echo.
echo [build.bat] a gate FAILED - see output above. Fix before continuing.
exit /b 1
