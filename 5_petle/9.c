#include <stdio.h>
#include <stdlib.h>

int czy_wczytac(int a, int b);

int main(int argc, char *argv[])
{
    FILE *in_handle;
    char bufor[BUFSIZ];
    int i = 0;
    double km, litry, cena, koszt;
	double srednia_cena, sredniespalanie;	
	double calosc_koszt = 0, calosc_paliwo = 0, calosc_przejechane = 0, calosc_sredniespalanie;
	
    if (argc != 2) {
	printf("Użycie: %s SOURCE_FILE\n", argv[0]);
	return 2;
    }

    if ((in_handle = fopen(argv[1], "r")) == NULL) {
	printf("Nie mogę otworzyć pliku do odczytu '%s'\n", argv[1]);
	return 1;
    }
	
    while (fgets(bufor, BUFSIZ, in_handle) != NULL) {
	if (czy_wczytac(bufor[0], bufor[1]) != 0)
	    continue;
	sscanf(bufor, "%lf %lf %lf", &km, &litry, &cena);

	sredniespalanie = ((litry * 100) / km);
	koszt = (litry * cena * 100) / km;

	calosc_koszt += koszt;
	calosc_paliwo += litry;
	calosc_przejechane += km;
	++i;

	printf("-- Spaliłeś %.2f l.\tŚrednie spalanie: %.2fl/100km\n", litry, sredniespalanie);
	printf("-- Cena przejechania ostatnich 100 km to %.2fzł\n\n", koszt);
    }
	
    fclose(in_handle);

    calosc_sredniespalanie = ((calosc_paliwo * 100) / calosc_przejechane);
    srednia_cena = calosc_koszt / i;
    printf("ZESTAWIENIE:\n");

    printf("-- Spaliłeś %.2f litrów\tPrzejechałeś %.2fkm\n", calosc_paliwo, calosc_przejechane);
    printf("-- Średnie spalanie: %.2fl/100km \tŚrednia cena paliwa: %.2fzł\n", calosc_sredniespalanie, srednia_cena);
    return EXIT_SUCCESS;
}

int czy_wczytac(int a, int b)
{
    int wynik;

    if (a && b == 45)
	wynik = 1;
    else {
	switch (a) {

	case 10:
	    wynik = 1;
	    break;

	case 13:
	    wynik = 1;
	    break;

	case 32:
	    wynik = 1;
	    break;

	case 9:
	    wynik = 1;
	    break;

	default:
	    wynik = 0;
	    break;
	}

    }

    return wynik;
}