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

/* zerowanie tablicy */
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

    while (n--)
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
    else if (a == ' ')
        printf("spacja");
    else
        printf("%c", a);

    printf("\t");
}

/* pobierz_libcze - uzycie w programie:
pobierz_libcze("Odp: ", &c)
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


/* funkcja sortuje tablice wg:
jesli tablica[n] > tablica [n+1]
to zamien miejscami i sprawdz czy:
tablica[n-1] > tablica [n]
jesli tak to zamien miejscami i powtorz.

pesymistyczna złożoność czasowa funkcji: O( ((n^2)-n)/2 )
optymistyczna O(n)
funkcja nadaje sie do sortowania wstepnie juz posortowanych tablic

narazie funkcje trzeba uzyc w petli while
*/

int sortuj_tablice(int **tablica_wsk, int tablica_size,
    	     int poz)
{
    int *temp;
    int poz2 = poz + 1;

    if (tablica_size == poz2) {
	return 0;
    } else
	if (*tablica_wsk[poz] > *tablica_wsk[poz2]) {
	    temp = tablica_wsk[poz];
	    tablica_wsk[poz] = tablica_wsk[poz2];
	    tablica_wsk[poz2] = temp;

	    if (poz)
	    posortuj_tablice(tablica_wsk, tablica_size, poz - 1);

	    return 1;
	}
return 1;
}