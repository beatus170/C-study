// calc_sum.c - Combining C logic (loops/variables) with Win32 API.

#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {

        int sum = 0;
        int i;

        for ( i = 1; i <= 100; i++) {

                sum += i;
        }

        wchar_t resultMessage[100];

        wsprintfW(resultMessage, L"The sum of numbers for 1 to 10 is %d", sum);

        MessageBoxW(NULL, resultMessage, L"C + Win32 Intergration", MB_OK | MB_ICONINFORMATION);

        return 0;
}
