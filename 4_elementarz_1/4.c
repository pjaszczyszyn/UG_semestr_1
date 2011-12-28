#include <stdio.h>
int main()
{

    int wynik, i;
    printf("Podaj liczbe: ");
    scanf("%d", &i);
    wynik = 1;
    while (i > 0) {
	wynik *= i;
	i--;
    }

    printf("%d\n", wynik);
    return 0;
}
