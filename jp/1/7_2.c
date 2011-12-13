#include <stdio.h>
#include <math.h>

int main(){
    float x, y;

    printf("Podaj liczbe rzeczywista: ");
    scanf("%f", &x);
    y = sqrtf(x);

    if (x == 0) {
      printf("Pierwiastek kwadratowy z %.4f to %.4f \n", x, y);
      printf("Zero nie posiada odwrotności \n");
	return 0;
    }

    if (x < 0) {
	printf("Liczba ujemna nie posiada pierwiastka \nOdwrotnosc liczby %.4f to %.4f \n",x, 1 / x);
	return 0;
    }

    printf("Pierwiastek kwadratowy z %.4f to %.4f \nOdwrotnosc liczby %.4f to %.4f \n", x, y, x, 1 / x);
    //lf po 15 znakach to smieci lepiej uzyc long double chyba 30 znakow
    return 0;
}
