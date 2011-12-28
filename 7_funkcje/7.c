#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void pobierz_wynik(char *prompt, int *px);
int sprawdz_wynik(int a, int b, int c);
int rnd(int rand1, int zarodek);
void komentarz(int odp, int zarodek);

int main()
{
    int a, b, c, d;
    int i = 1, ilosc_pytan = 5;
    int dobre_odp = 0, zle_odp = 0;

    while (ilosc_pytan--) {
        a = rnd(11, i++);
        b = rnd(11, i++);
        printf("\nIle wynosi: %d * %d \n", a, b);
        pobierz_wynik("Odp: ", &c);
        d = sprawdz_wynik(a, b, c);
        komentarz(d, ilosc_pytan);

        if (d)
            ++dobre_odp;
        else
            ++zle_odp;

    }

    printf("\nDobrych odpowiedzi: %d\nZłych odpowiedzi: %d\n\n",
           dobre_odp, zle_odp);
    return 0;
}

void komentarz(int odp, int zarodek)
{
    int i = rnd(3, zarodek);

    if (odp) {
        switch (i) {
        case 0:
            printf("Bardzo dobrze!");
            break;
        case 1:
            printf("Świetnie");
            break;
        case 2:
            printf("Dobra robota!");
            break;
        }
    } else {
        switch (i) {
        case 0:
            printf("Zła odpowiedź");
            break;
        case 1:
            printf("Oj, niedobrze");
            break;
        case 2:
            printf("Następnym razem może pójdzie Ci lepiej");
            break;
        }
    }

    printf("\n");
}

int rnd(int rand1, int zarodek)
{

    zarodek *= time(NULL)/100;
    srand(zarodek);

    return (rand() % rand1);
}

void pobierz_wynik(char *prompt, int *px)
{
    printf(prompt);
    scanf("%d", px);
}

int sprawdz_wynik(int a, int b, int c)
{

    return (((a * b) == c) ? 1 : 0);

}