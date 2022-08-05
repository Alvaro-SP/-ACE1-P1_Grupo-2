@echo off
echo %~dp0
@REM git remote add all https://github.com/Alvaro-SP/PROYECTO-COMPI2.git

SET /P NOMBRE=WRITE COMMIT:
git add .
git commit -m "%NOMBRE%"
git push
git push https://Alvaro-SP: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@github.com/Alvaro-SP/-ACE1-P1_Grupo-2.git
pause


