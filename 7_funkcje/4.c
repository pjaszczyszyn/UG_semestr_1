/*
4. Napisz funkcję, która po wczytaniu liczby całkowitej wypisze jej cyfry zaczynając od ostatniej i kończąc na pierwszej. Na przykład po wczytaniu liczby '1410' funkcja powinna wypisać '0141'.
*/
#include <stdio.h>
void wypisz_liczbe_od_konca(int n);
void podaj_liczbe_calk(char *tekst, int *liczba);

int main(){
    int a;

    podaj_liczbe_calk("Podaj liczbę calkowitą: ", &a);
    wypisz_liczbe_od_konca(a);
    return 0;
}

void wypisz_liczbe_od_konca(int n){
    int i = 0;
    char tablica[50];

    snprintf(tablica, 10, "%d", n);
    printf("Liczba %d zapisana od końca to: ", n);

    while (n) {
        i++;
        n /= 10;
    }

    while (--i >= 0) {
        printf("%c", tablica[i]);
    }
    printf("\n");
}

void podaj_liczbe_calk(char *tekst, int *liczba){
    printf(tekst);
    scanf("%d", liczba);
	}