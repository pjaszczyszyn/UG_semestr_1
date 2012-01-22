#include <stdio.h>

int main()
{
	double *(*p[10])[5];
	double *a[5];
	double *b[5];
	double *c[5];
	double *d[5];
	double *e[5];
	
	double tab[5];

	int z=5;

/* przypisujemy wartości tablicy z liczbami rzeczywistymi */
	while (z--)
	tab[z] = 1.00 * z + 0.01;
	
	
	
/* przypisujemy adresy tablic wskaźników do tablicy wskaźników */
	p[0] = &a; /* teraz  *(p[0]) zwraca wartość p[0] czyli adres tablicy a */
	p[1] = &b;
	p[2] = &c;
	p[3] = &d;
	p[4] = &e;


	z = 5;
	while (z--)
	(*p[0])[z] = tab+z; 
	/*
	zmienna tab jest tablicą więc:
	pod wartością tab znajduje się adres w pamięci
	pod wartością tab znajduje się to samo co &tab[0]
	pod wartością *tab znajduje się to samo co tab[0]


	to samo co:	
	(*p[0])[0] = &tab[0];
	(*p[0])[1] = &tab[1];
	(*p[0])[2] = &tab[2];
	(*p[0])[3] = &tab[3];
	(*p[0])[4] = &tab[4];
	
	ale też:
	
	a[0] = &tab[0];
	a[1] = &tab[1];
	a[2] = &tab[2];
	a[3] = &tab[3];
	a[4] = &tab[4];
	
	*/

printf("\n*a = %p\n\n", *a);

printf("tab = %p\n", tab);
printf("&tab[0] = %p\n\n", &tab[0]);
printf("*tab = %f\n", *tab);
printf("tab[0] = %f\n\n", tab[0]);


	z = 5;
while (z--)
printf("tab[%d] = %f\n", z, *(*p[0])[z]);


    return 0;
}
