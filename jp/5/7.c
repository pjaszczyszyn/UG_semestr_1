#include <stdio.h>

int main()
{
  int i, count;
  float tablica[6];

    printf("podaj 6 liczb rzeczywistych: ");
    for (i = 0; i < 6; i++) {
	scanf("%f", &tablica[i]);
    }
    count=0;
    i = 0;
    while (i < 6) {

      if ((int) tablica[i] == tablica [i])
      if (!((int)tablica[i]&1))
	++count;
	++i;
    }

    printf("liczba liczb dodatnich: %d\n", count );

    return 0;
}
