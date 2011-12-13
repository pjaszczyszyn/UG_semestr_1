#include <stdio.h>

int main()
{
    int a, b, i = 1;

    printf("Podaj liczbę całkowitą: ");
    scanf("%d", &a);

    printf("Podaj drugą liczbę całkowitą, większą od pierwszej: ");
    scanf("%d", &b);
    b -= a;

    while (i < b) {
	printf("%d\n",++a);
	++i;
    }
    return 0;
}
