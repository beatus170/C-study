# C-study
C언어 기초 학습 및 예제 코드를 저장하는 공간입니다. 
해당 예제들은 구글 Gemini로 작성되었습니다. 
This repository contains C programming practices and examples for beginners made by Google Gemini.


## 💻 개발 환경 (Environment)
* **OS**: Windows + WSL 2 (Ubuntu)
* **Editor**: Vim
* **Compiler**: GCC (Linux) & MinGW-w64 (Windows Cross-Compiler)

## 🛠️ 컴파일 및 실행 방법 (How to Compile)

**WSL 환경에서 윈도우 실행 파일(.exe) 생성하기:**
(Cross-compiling for Windows on WSL)

```bash
# 예시: wsl에서 작성한 gugudan.c를 gugudan.exe로 컴파일
x86_64-w64-mingw32-gcc -o gugudan.exe gugudan.c
