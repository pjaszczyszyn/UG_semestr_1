#include <stdio.h>
/* funkcja wypisz, wypisuje znaki "*" lub " "
a oznacza dlugość
b parzyste oznaczają "*", nieparzyste " " */
int wypisz(int a, int b);

int main()
{
    int a = 1, i, j;

    for (j = 0; j < 4; j++) {
	/* tworzymy tablicę z liczbą znaków, parzyste (oraz 0) indeksy oznaczają "*" , nieparzyste " " */
        int tab[7] = {a, 8-a, 5-a, (a+1)*2, tab[2],tab[1], a };
        for (i = 0; i < 7; i++)
        wypisz(tab[i], i);
        printf("\n");
        a++;
    }
    return 0;
}

int wypisz(a, b)
{
    int i;
    for (i = 0; i < a; i++) {
        if (b%2==0)
            putchar('*');
        else
            putchar(' ');
    }
    return 0;
}