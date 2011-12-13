#include <stdio.h>

int main()
{
    float x, y, z, q, w;
    /*Pobierz dane*/
    printf("Wprowadź trzy liczby całkowite: ");
    scanf("%f%f%f", &x, &y, &z);


    /*wykonaj obliczenia*/
    if (x > y)
	q = x;
    else
	q = y;
    if (q < z)
	q = z;

    if (x > y)
	w = y;
    else
	w = x;
    if (w > z)
	w = z;

    /*Wypisz wyniki*/
    printf("Suma wynosi %.0f \n", x + y + z);
    printf("Iloczyn wynosi %.0f \n", x * y * z);
    printf("Najmniejsza liczba to: %.0f \n", w);
    printf("Największa liczba to: %.0f \n", q);

    return 0;
}
