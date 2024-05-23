#include <stdio.h>
#include <Windows.h>

/*put Gdi32.lib for it to compile successfully for the Rectangle function
  put User32.lib for it to compile successfully for the GetDC function

  format cl lib1 lib2 libn file.c


*/

int main(){
    HDC screen = GetDC(NULL); // for getting the full screen
    HBRUSH greenBrush = CreateSolidBrush(RGB(0, 128, 0)); // creating a green brush
    SelectObject(screen, greenBrush); // for selecting the brush and making it available for the program to use it

    for(int counter = 0;; counter +=10) {
        Rectangle(screen, 40 + counter, 40 + counter, 400 + counter, 400 + counter); // dimensions of screen
        Sleep(30); // sleeping a little to see the drawing occurring

    }
}

