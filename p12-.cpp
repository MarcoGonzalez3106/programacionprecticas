#include <windows.h>
#include <time.h>
#include <iostream>
#include <conio.h> //para usar el getche()
using namespace std;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    int r, vec[10];
    srand(time(0)); // Inicializar la semilla de números aleatorios
    printf("Maximice la pantalla y presione una tecla");
    getche();
    printf("CLS");
    for (r = 0; r <= 78; r++) { // Dibujar las líneas horizontales
        gotoxy(r, 0); // Línea superior
        printf("*");
        gotoxy(r, 16); // Línea inferior
        printf("*");
    }
    for (r = 0; r <= 18; r++) { // Dibujar las líneas verticales
        gotoxy(0, r); // Línea izquierda
        printf("*");
        gotoxy(78, r); // Línea derecha
        printf("*");
    }
    gotoxy(39, 12);
    printf("Elementos del vector");
    for (r = 0; r <= 9; r++) {
        gotoxy(40 + r * 8, 17);
        printf("%i", vec[r]);
    }
    gotoxy(5, 15);
    return 0;
}