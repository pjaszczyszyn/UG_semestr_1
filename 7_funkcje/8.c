#include <stdio.h>
#include "random.h"             /* biblioteka do losowania liczb CSLib */
#include "strlib.h"             /* obsługa stringów CSLib */
#include "simpio.h"             /* pobieranie wiersza z stdio CSLib */

void zgadnij(void);
void sprawdz_odp(int a, int b, int *c);
void pobierz_int(char *prompt, int *px);
bool tak_czy_nie(string prompt);

int main()
{

    Randomize();

    while (TRUE) {
        zgadnij();
        if (!tak_czy_nie("Grasz jeszcze raz? "))
            break;
    }

    return 0;
}

bool tak_czy_nie(string prompt)
{
    string odp;

    while (TRUE) {
        printf("%s", prompt);
        odp = GetLine();        /* używamy biblioteke simpio.h */
        if (StringEqual(odp, "tak"))
            return (TRUE);
        if (StringEqual(odp, "nie"))
            return (FALSE);
        printf("Napisz \"tak\" lub \"nie\".\n");
    }
}

void zgadnij(void)
{
    int a;
    int odp;
    int jaka;
    jaka = 1;

    a = RandomInteger(1, 1000);

    while (jaka) {
        pobierz_int("Podaj liczbę z przedziału 1 do 1000: ", &odp);
        sprawdz_odp(a, odp, &jaka);
    }

}

void sprawdz_odp(int a, int b, int *c)
{
    if (a == b) {
        printf("Gratulacje, zgadłeś!\n");
        *c = 0;
    } else if (b < a) {
        printf("Za mało!\n");
    } else {
        printf("Za dużo!\n");
    }
}

void pobierz_int(char *prompt, int *px)
{
    printf(prompt);
    scanf("%d", px);
}
