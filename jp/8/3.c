#include <stdio.h>
#include <math.h>


long double funkcja_pi(int p)
{
    int i, j;
    long double pi, znak;

    pi = 0;
    znak = 1;

    for (i = 1, j = 0; j < p; j++, i += 2) {
	pi += (znak * 4) / i;
	znak *= (-1);
    }
    return pi;
}

int main()
{

    int liczba;
    printf("Podaj liczbe powtorzen: ");
    scanf("%d", &liczba);

    printf("%d: %.10Lf\n", liczba, funkcja_pi(liczba));
    printf("10: %.0Lf\n", funkcja_pi(10));
    printf("100: %.1Lf\n", funkcja_pi(100));
    printf("1000: %.2Lf\n", funkcja_pi(1000));
    printf("10_000: %.3Lf\n", funkcja_pi(10000));
    printf("100_000: %.4Lf\n", funkcja_pi(100000));
    printf("1_000_000: %.5Lf\n", funkcja_pi(1000000));
    return 0;
}
