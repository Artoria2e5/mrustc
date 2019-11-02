@call build_std.cmd
@if %errorlevel% neq 0 exit /b %errorlevel%

@mkdir output\rustc-build
x64\Release\minicargo.exe ..\rustc-%RUSTC_VERSION%-src\src\rustc -L %OUTDIR% --output-dir %OUTDIR%\rustc-build --vendor-dir ..\rustc-%RUSTC_VERSION%-src\src\vendor
@if %errorlevel% neq 0 exit /b %errorlevel%