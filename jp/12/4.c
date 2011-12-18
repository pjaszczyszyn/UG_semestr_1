#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void clear_table_int(int *table, int size_table);

int main(int argc, char *argv[])
{
    FILE *fout; 		/* uchwyt do pliku wyjściowego */
    FILE *fin;
    int table_ascii_numbers[128];
    int table_ascii_numbers_size = sizeof(table_ascii_numbers) / sizeof(int);
    int c;
    int wypisz;
    int count_all = 0;

    if (argc != 3) {
	printf("Użycie: %s SOURCE_FILE DEST_FILE\n", argv[0]);
	return 3;
    }
    if ((fout = fopen(argv[2], "w")) == NULL) {
	printf("Nie mogę otworzyć pliku do zapisu '%s'\n", argv[2]);
	return 2;
    }

    if ((fin = fopen(argv[1], "r")) == NULL) {
	printf("Nie mogę otworzyć pliku do odczytu '%s'\n", argv[1]);
	return 1;
    }

    printf("Zapisuję dane do pliku: %s\n", argv[2]);

    clear_table_int(table_ascii_numbers, table_ascii_numbers_size);

    while ((c = fgetc(fin)) != EOF) {
	if (isalpha(c)) {
	   table_ascii_numbers[tolower(c)]++;

	    ++count_all;
	}
    }

    wypisz = 0;
    while (wypisz++ < 128) {
	if (islower(wypisz)) {

	    fprintf(fout, " %d %.2f\n", wypisz,
		    ((float)table_ascii_numbers[wypisz] / count_all) * 100);
	}
    }

    fclose(fout);

    printf("Zakończono zapis do pliku.\n");

    return 0;
}

void clear_table_int(int *table, int size_table)
{
    while (size_table-- > 0)
	table[size_table] = 0;

}
