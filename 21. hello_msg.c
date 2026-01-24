// hello_msg.c - A simple program that displays a Windows message box.

#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {
    
    MessageBox(NULL, "This is the shortest Win32 code!", "Hello World", MB_OK);

    return 0;
}
