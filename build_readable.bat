@echo off
REM Phantasy Star Zero (C24E) decomp - readable-layer chain: prove the layer,
REM then BUILD the bootable card from it (match\build\PSZERO-readable.nds).

setlocal
cd /d "%~dp0"

where python >nul 2>nul
if errorlevel 1 (
    echo [build_readable.bat] python not found on PATH - the gates need python with pyelftools and capstone.
    exit /b 1
)

echo [1/5] lint_readable - readability rules
python tools\probes\lint_readable.py
if errorlevel 1 goto :fail

echo [2/5] audit_readable - readable compiles must be byte-identical to twins
python tools\probes\audit_readable.py
if errorlevel 1 goto :fail

echo [3/5] audit_doclinks - every doc-referenced path resolves
python tools\probes\audit_doclinks.py
if errorlevel 1 goto :fail

echo [4/5] build_readable_rom - relink + rebuild from src-readable\ + ASM
python tools\build_readable_rom.py
if errorlevel 1 goto :fail

echo [5/5] status - banked vs live set
python tools\status.py

echo.
echo [build_readable.bat] readable layer green - ROM at match\build\PSZERO-readable.nds
goto :eof

:fail
echo.
echo [build_readable.bat] a gate FAILED - see output above. Fix before continuing.
exit /b 1
