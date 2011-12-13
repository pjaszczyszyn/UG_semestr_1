/*Napisz program wypisujący przskalowowane liczby LCD*/
#include <stdio.h>
#include <stdlib.h>

void skaluj(int liczba, int skala);
void wypisz_wiersz(int kreska, int spacja, int myslnik, int spacja2,
                   int kreska2, int skala);

int main(int argc, char *argv[])
{
    int l, w;
    if (argc == 2) {
        /* wypisywanie podanej liczby, skala = 1 */
        l = atoi(argv[1]);
        w = 1;
    } else if (argc == 3) {
        /* wypisywanie liczby ze podanym skalowaniem */
        l = atoi(argv[1]);
        w = atoi(argv[2]);
    }
    skaluj(l, w);
    return 0;
}

void skaluj(int liczba, int skala)
{
    /* wypisz liczbę w podanej skali */
    switch (liczba) {

    case 0:
        wypisz_wiersz(0, 1, 1, 1, 0, skala);
        wypisz_wiersz(1, 0, 0, 1, 1, skala);
        wypisz_wiersz(0, 0, 0, 0, 0, skala);
        wypisz_wiersz(1, 0, 0, 1, 1, skala);
        wypisz_wiersz(0, 1, 1, 1, 0, skala);
        break;

    case 1:
        wypisz_wiersz(0, 0, 0, 0, 1, skala);
        wypisz_wiersz(0, 0, 0, 0, 1, skala);
        wypisz_wiersz(0, 0, 0, 0, 1, skala);
        wypisz_wiersz(0, 0, 0, 0, 1, skala);
        wypisz_wiersz(0, 0, 0, 0, 1, skala);
        break;

    case 2:
        wypisz_wiersz(0, 1, 1, 1, 0, skala);
        wypisz_wiersz(0, 1, 0, 1, 1, skala);
        wypisz_wiersz(0, 1, 1, 1, 0, skala);
        wypisz_wiersz(1, 0, 0, 0, 0, skala);
        wypisz_wiersz(0, 1, 1, 1, 0, skala);
        break;

    case 3:
        wypisz_wiersz(0, 1, 1, 1, 0, skala);
        wypisz_wiersz(0, 1, 0, 1, 1, skala);
        wypisz_wiersz(0, 1, 1, 1, 0, skala);
        wypisz_wiersz(0, 1, 0, 1, 1, skala);
        wypisz_wiersz(0, 1, 1, 1, 0, skala);
        break;

    case 4:
        wypisz_wiersz(0, 0, 0, 0, 0, skala);
        wypisz_wiersz(1, 0, 0, 1, 1, skala);
        wypisz_wiersz(0, 1, 1, 1, 0, skala);
        wypisz_wiersz(0, 1, 0, 1, 1, skala);
        wypisz_wiersz(0, 0, 0, 0, 0, skala);
        break;

    case 5:
        wypisz_wiersz(0, 1, 1, 1, 0, skala);
        wypisz_wiersz(1, 0, 0, 0, 0, skala);
        wypisz_wiersz(0, 1, 1, 1, 0, skala);
        wypisz_wiersz(0, 1, 0, 1, 1, skala);
        wypisz_wiersz(0, 1, 1, 1, 0, skala);
        break;

    case 6:
        wypisz_wiersz(0, 1, 1, 1, 0, skala);
        wypisz_wiersz(1, 0, 0, 0, 0, skala);
        wypisz_wiersz(0, 1, 1, 1, 0, skala);
        wypisz_wiersz(1, 0, 0, 1, 1, skala);
        wypisz_wiersz(0, 1, 1, 1, 0, skala);
        break;

    case 7:
        wypisz_wiersz(0, 1, 1, 1, 0, skala);
        wypisz_wiersz(0, 1, 0, 1, 1, skala);
        wypisz_wiersz(0, 1, 0, 1, 1, skala);
        wypisz_wiersz(0, 1, 0, 1, 1, skala);
        wypisz_wiersz(0, 1, 0, 1, 1, skala);
        break;

    case 8:
        wypisz_wiersz(0, 1, 1, 1, 0, skala);
        wypisz_wiersz(1, 0, 0, 1, 1, skala);
        wypisz_wiersz(0, 1, 1, 1, 0, skala);
        wypisz_wiersz(1, 0, 0, 1, 1, skala);
        wypisz_wiersz(0, 1, 1, 1, 0, skala);
        break;

    case 9:
        wypisz_wiersz(0, 1, 1, 1, 0, skala);
        wypisz_wiersz(1, 0, 0, 1, 1, skala);
        wypisz_wiersz(0, 1, 1, 1, 0, skala);
        wypisz_wiersz(0, 1, 0, 1, 1, skala);
        wypisz_wiersz(0, 1, 1, 1, 0, skala);
        break;

    }
}

/* funkcja wypisuje określoną ilość spacji, kresek i myślników w podanej skali*/
void wypisz_wiersz(int kreska, int spacja, int myslnik, int spacja2,
                   int kreska2, int skala)
{
    int ilosc_wieszy = 1;
    spacja2 *= skala;
    myslnik *= skala;

/* jeśli jest to linia z kreskami to wypisujemy ją skalowaną liczbę razy */
    if (kreska > 0 || kreska2 > 0)
        ilosc_wieszy = skala;

    while (ilosc_wieszy--) {

        int kr = kreska;
        int sp = spacja;
        int mys = myslnik;
        int sp2 = spacja2;
        int kr2 = kreska2;

        while (kr--)
            printf("|");

        while (sp--)
            printf(" ");

        while (mys--)
            printf("-");

        while (sp2--)
            printf(" ");

        while (kr2--)
            printf("|");

        printf("\n");
    }
}
