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

void clear_table_int(int *table, int size_table)
{
    while (size_table-- > 0)
        table[size_table] = 0;
}

int czy_to_znak(int a)
{
    if (a > 0 && a < 127)
        return 1;
    else
        return 0;
}

void wypisz_n_znakow(int n, char *znak)
{
    ++n;
    while (--n)
        printf(znak);
    printf("\n");
}

void wypisz_znaki_ascii(int a)
{
    if (a == '\n')
        printf("\\n");
    else if (a == '\v')
        printf("\\v");
    else if (a == '\t')
        printf("\\t");
    else if (a == '\r')
        printf("\\r");
    else if (a == '\f')
        printf("\\f");
    else if (a == 32)
        printf("spacja");
    else
        printf("%c", a);

    printf("\t");
}

/* pobierz dane - uzycie w programie:
pobierz_wynik("Odp: ", &c)
 - pobiera wpisaną wartość do c */

 void pobierz_libcze(char *prompt, int *px)
{
    printf(prompt);
    scanf("%d", px);
}

void pobierz_dwa_double(char *prompt, double *px, double *py) {
  printf(prompt);
  scanf("%lf %lf", px, py);
}

