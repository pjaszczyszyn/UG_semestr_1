//podaj liczbe
int podaj_liczbe(char *prompt)
{
    int n;

    printf(prompt);
    scanf("%d", &n);

    if (n < 1) {
	while (n < 1) {
	    printf
		("Blad: liczba mniejsza niz '1'\n Podaj liczbe wieksza niz 1: \n");
	    scanf("%d", &n);
	}
    }
    return n;
}

//silnia
long double silnia(int a)
{
    int i = a--;

    while (a) {
	i *= a--;
    }

    return i;
}

// wypisz silnia n liczb naturalnych
void silnia_n_pierwszych(int x){
    long double sil;

    while (x > 0) {

	sil = silnia(x);

	printf("Silnia z %d to: %Lf\n", x, sil);

	x--;
    }
}
