#include<stdio.h>
#include <math.h>

void wypisz_pierw(double ile);
int main()
{
    double a;

    a = 20;
    wypisz_pierw(a);

    return 0;
}


void wypisz_pierw(double ile)
{
    ++ile;
    while (--ile) {

        printf("%d\t%0.5f\n", (int) ile, sqrt(ile));

    }
}
