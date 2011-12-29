#include<stdio.h>
#include <math.h>

void wypisz_trojkat_pit(double ile);
int czy_calkowita(double a);

int main()
{
    double a;

    a = 1000;
    wypisz_trojkat_pit(a);

    return 0;
}

void wypisz_trojkat_pit(double ile)
{
    double a, b, c, obwod;

    a = 1;                      /* zaczynamy od długości boku a = 1 */

    while ((a * 2) < ile) {     /* boki trójkąta nie mogą być dłuże od jego obwodu */
        b = a;                  /* za każdym okrążeniem pętli bok b jest równy a ponieważ mniejsze od a zostały już sprawdzone */
        obwod = 0;

        while (obwod < ile) {   /* w tej pętli sprawdzamy boki trójkąta długości a i kolejnej długości b */
            c = sqrt(pow(a, 2) + pow(b, 2));
            obwod = a + b + c;

            if (obwod > ile)    /* jeśli obwód jest większy od określonego limitu to przerywamy pętle */
                break;

            if (czy_calkowita(c)) {
                printf("%0.0f^2 + %0.0f^2 = %0.0f^2\tOBWÓD:%0.0f\n", a, b,
                       c, obwod);
            }
            ++b;
        }
        ++a;
    }
}

/* f. sprawdza czy liczba zmiennoprzecinkowa "a" jest liczbą całkowitą
działa tylko na liczbach nie większych od long long int */
int czy_calkowita(double a)
{
    long long int temp;
    double b;

    temp = (long long int) a;
    b = (double) temp;

    if (a == b)
        return 1;

    return 0;
}
