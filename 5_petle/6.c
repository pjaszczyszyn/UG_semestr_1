#include <stdio.h>


void podaj_liczby(char *prompt, int ile, double tablica[]);

int main()
{

  double max, min, tablica[5];
  int i, ile=(sizeof tablica / sizeof tablica[0]);


  podaj_liczby("Podaj %d liczb rzeczywistych: ",ile, tablica);


    i = 1;
    max=min=tablica[0];
    while (i < ile) {
      if(tablica[i]>max)
	max=tablica[i];
      if(tablica[i]<min)
	min=tablica[i];
	i++;
    }

    printf("min: %.2f\nmax: %.2f\n ", min,max );

    return 0;
}

void podaj_liczby(char *prompt, int ile, double tablica[]){
  int i;
  printf(prompt,ile);
    for (i = 0; i < ile; i++) {
	scanf("%lf", &tablica[i]);
    }
}
