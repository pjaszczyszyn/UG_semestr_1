#include <stdio.h>
int main()
{
    int M, suma, i;
    suma = 0;
    i = 0;
    printf("Podaj liczbe M: ");
    scanf("%d", &M);
    while (suma < M) {
	i++;
	suma = suma + i;
    }
    printf("Szukane n to: %d\n", i);
    return 0;
}
