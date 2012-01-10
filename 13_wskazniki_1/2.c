#include <stdio.h>
void posortuj_tablice(int *tablica, int **tablica_wsk, int tablica_size);
void wypisz_tablice_wsk(char *prompt, int **tablica_wsk, int tablica_size);

int main()
{
    int tablica[15] = { 4, 5, 2, 1, 4, 5, 2, 14, 5, 2, 1, 4, 5, 2, 1 };
    int *tablica_wsk[15];
    int tablica_size = sizeof(tablica) / sizeof(int);


    posortuj_tablice(tablica, tablica_wsk, tablica_size);
    wypisz_tablice_wsk("", tablica_wsk, tablica_size);

    return 0;
}

void wypisz_tablice_wsk(char *prompt, int **tablica_wsk, int tablica_size)
{
    int i;

    for (i = 0; i < tablica_size; i++) {
	printf(prompt);
	printf("%d\n", *tablica_wsk[i]);
    }


}

void posortuj_tablice(int *tablica, int **tablica_wsk, int tablica_size)
{
    int j, i, a = 1;
    int *temp;

    for (i = 0; i < tablica_size; i++) {
	tablica_wsk[i] = &tablica[i];
    }

    while (a) {
	a = 0;
	for (j = 0; j < tablica_size - 1; j++) {
	    if (*tablica_wsk[j] > *tablica_wsk[j + 1]) {
		temp = tablica_wsk[j];
		tablica_wsk[j] = tablica_wsk[j + 1];
		tablica_wsk[j + 1] = temp;
		++a;
	    }
	}
    }


}
