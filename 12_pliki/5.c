#include <stdio.h>
#include <stdlib.h>
#include "genlib.h"
#include "simpio.h"
#include "strlib.h"

/* tworzymy strukturę pojedynczej lini */
typedef struct wiersz_struct {
    string a;
    string b;
} wiersz_t;

/* tworzymy strukturę kodów formatów danych */
typedef struct formaty_struct {
    wiersz_t wej;
    wiersz_t wyj;
} formaty_t;

/* funkcja zamienia pobrany string na nową strukturę */
wiersz_t to_wiersz_struct(string format_in);
/*funkcja sprawdza format danych 
w wyniku daje:
1 - dla double
2 - dla float
3 - dla int
*/
int sprawdz_format(string format);

/* funkcja wczytuje formaty danych z pliku */
formaty_t wczytaj_formaty(FILE * in_handle);

/*funkcja wypisuje dane w podanych formatach */
void wypisz_dane(FILE * in_handle, formaty_t formaty);

int main(int argc, char *argv[])
{
    FILE *in_handle;
    in_handle = fopen(argv[1], "r");
    formaty_t formaty;

    formaty = wczytaj_formaty(in_handle);
	
    printf("Format wejściowy: %s %s\n", formaty.wej.a, formaty.wej.b);
    printf("Format wyjściowy: %s %s\n\n", formaty.wyj.a, formaty.wyj.b);

    wypisz_dane(in_handle, formaty);

    fclose(in_handle);
    return EXIT_SUCCESS;
}

wiersz_t to_wiersz_struct(string format_in)
{
    wiersz_t format;
    int p1, p2;

    p1 = FindChar(' ', format_in, 0);
    p2 = StringLength(format_in);
    format.a = SubString(format_in, 0, p1);
    format.b = SubString(format_in, p1+1, p2);

    return format;
}


int sprawdz_format(string format)
{
    int n = 0;

    if (((FindChar('L', format, 0) != -1)
         && (FindChar('f', format, 0) != -1))
        || ((FindChar('L', format, 0) != -1)
            && (FindChar('e', format, 0) != -1))) {
        n = 1;                  /*double */
    } else if ((FindChar('f', format, 0) != -1)
               || (FindChar('e', format, 0) != -1)) {
        n = 2;                  /*float */
    } else if ((FindChar('d', format, 0) != -1)
               || (FindChar('u', format, 0) != -1)) {
        n = 3;                  /*int */
    }
    return n;
}


formaty_t wczytaj_formaty(FILE * in_handle)
{
    formaty_t formaty;

    formaty.wej = to_wiersz_struct(ReadLine(in_handle));
    formaty.wyj = to_wiersz_struct(ReadLine(in_handle));

    return formaty;
}

void wypisz_dane(FILE * in_handle, formaty_t formaty)
{
    wiersz_t dane;
    string wiersz;

    while (1) {

        if (!(wiersz = ReadLine(in_handle)))
            break;

        dane = to_wiersz_struct(wiersz);

        switch (sprawdz_format(formaty.wyj.a)) {
        case 1:
            /* printf(formaty.wyj.a, StringToLongReal(dane.a)); */
			printf("Program nie wypisuje danych w formacie: %s",formaty.wyj.a);
            break;
        case 2:
            printf(formaty.wyj.a, StringToReal(dane.a));
            break;
        case 3:
            printf(formaty.wyj.a, StringToInteger(dane.a));
            break;
        }
		
		printf("\t");
			
        switch (sprawdz_format(formaty.wyj.b)) {
        case 1:
            /* printf(formaty.wyj.b, StringToLongReal(dane.b)); */
			printf("Program nie wypisuje danych w formacie: %s",formaty.wyj.b);
            break;
        case 2:
            printf(formaty.wyj.b, StringToReal(dane.b));
            break;
        case 3:
            printf(formaty.wyj.b, StringToInteger(dane.b));
            break;
        }
        printf("\n");
    }
}
