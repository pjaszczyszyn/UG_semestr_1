#include <stdio.h>

int main()
{
    int i, tablica[6];

    printf("podaj 6 liczb calkowitych: ");
    for (i = 0; i < 6; i++) {
	scanf("%d", &tablica[i]);
    }

    i = 0;
    while (i <= 5) {
	printf("%d ", tablica[i]);
	i++;
    }
    printf("\n");
    while (i > 0) {
	--i;
	printf("%d ", tablica[i]);
    }
    printf("\n");


    return 0;
}
