#include <stdio.h>
#include <stdlib.h>

struct zmienna {
    float x;
    float y;
    char znak;
    float wynik;
};

void dane(struct zmienna *A) {
    printf("wpisz dzialanie:+,-,,/");


    scanf("%f", &A->x);
    scanf("%c", &A->znak);
    scanf("%f", &A->y);
};

void dzialanie(struct zmienna *B) {

    if (B->znak == '+') {
        B->wynik = B->x + B->y;

        printf("wynik dzialania: %.1f", B->wynik);

    } else if (B->znak == '-') {
        B->wynik = B->x - B->y;

        printf("wynik dzialania: %.1f", B->wynik);

    } else if (B->znak == '*') {
        B->wynik = B->x * B->y;

        printf("wynik dzialania:%1.f", B->wynik);

    } else if (B->znak == '/') {
        if (B->y == 0) {
            printf("nie wolno dzielic przez 0");
        } else {

            B->wynik = B->x / B->y;

            printf("wynik dzialania:%1.f", B->wynik);
        }

    }
};

int main() {
    struct zmienna *C = (struct zmienna *) malloc(sizeof(struct zmienna));
    dane(C);
    dzialanie(C);
}