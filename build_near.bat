@echo off
REM Phantasy Star Zero (C24E) decomp - build the NEAR-TEST ROM.
REM
REM Same gate chain as build.bat, then a bootable ROM with every parked
REM near-miss candidate's compiled bytes swapped in live:
REM   match\build\PSZERO-near-test.nds
REM
REM Play it in melonDS: a crash/glitch localizes the failing candidate;
REM a clean run means that candidate's residual is benign. The normal ROM
REM (match\build\PSZERO-built.nds) is produced by build.bat.

setlocal
cd /d "%~dp0"

where python >nul 2>nul
if errorlevel 1 (
    echo [build_near.bat] python not found on PATH - the gates need python with pyelftools and capstone.
    exit /b 1
)

echo [1/6] audit_all_src - recompile + re-verify every banked file
python tools\probes\audit_all_src.py | findstr /r "PASS FAIL"
if errorlevel 1 goto :fail

echo [2/6] linkcheck - reloc-target verification
python tools\linkcheck.py | findstr /r "LINK-VERIFICATION"
if errorlevel 1 goto :fail

echo [3/6] audit_doclinks - every doc reference resolves
python tools\probes\audit_doclinks.py
if errorlevel 1 goto :fail

echo [4/6] build_all - whole-project delink + relink + byte-compare + ROM build
set PSZ_BUILD_ROM=1
python tools\build_all.py | findstr /r "IDENTICAL MISMATCH WHOLE-PROJECT"
if errorlevel 1 goto :fail

echo [5/6] near_audit - parked near-miss candidates
python tools\near_audit.py --quiet
if errorlevel 1 goto :fail

echo [6/6] build_near_rom - near-test ROM with the candidates live
python tools\build_near_rom.py
if errorlevel 1 goto :fail

echo.
echo [build_near.bat] near-test ROM at match\build\PSZERO-near-test.nds
goto :eof

:fail
echo.
echo [build_near.bat] a gate FAILED - see output above. Fix before continuing.
exit /b 1
