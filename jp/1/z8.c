#include <stdio.h>
int suma_liczb(int tablica[], int size);
int iloczyn_liczb(int tablica[], int size);
void minmax(int tablica[], int size, int* min, int* max);

int main() {
  int liczby[6]; // x = liczby[0], y = liczby[1], z = liczby[2]
  int najmniejsza, najwieksza;

  printf("podaj pierwsza liczbe calkowita: ");
  scanf("%d", &liczby[0]);
  printf("podaj druga liczbe calkowita: ");
  scanf("%d", &liczby[1]);
  printf("podaj trzecia liczbe calkowita: ");
  scanf("%d", &liczby[2]);
  printf("suma: %d\n", suma_liczb(liczby, 3));
  printf("iloczyn: %d\n", iloczyn_liczb(liczby, 3));

  minmax(liczby, 3, &najmniejsza, &najwieksza);
  printf("największa liczba to %d\n", najwieksza);
  printf("najmniejsza liczba to: %d\n", najmniejsza);

  return 0;
}

int suma_liczb(int tablica[], int size) {
  int wynik = 0, i;
  for(i = 0; i < size; i++) {
    wynik = wynik + tablica[i];
    // wynik += tablica[i];
  }
  return wynik;
}

int iloczyn_liczb(int tablica[], int size) {
  int wynik = 1, i;
  for(i = 0; i < size; i++) {
    wynik = wynik * tablica[i];
  }
  return wynik;
}

// tablica musi mieć co najmniej jeden element
void minmax(int tablica[], int size, int* min, int* max) {
  int najwiekszy, najmniejszy, i;


  najmniejszy=najwiekszy=tablica[0];
  for(i = 1; i < size; i++) {


     if (tablica[i] > najwiekszy) { 
       najwiekszy = tablica[i]; 
     } 

     if (tablica[i] < najmniejszy) { 
       najmniejszy = tablica[i]; 
     } 

  }

  *min=najmniejszy;
  *max=najwiekszy;
  /* najwiekszy = tablica[0]; */
  /* for(i = 1; i < size; i++) { */
  /*   if (tablica[i] > najwiekszy) { */
  /*     najwiekszy = tablica[i]; */
  /*   } */
  /* } */
  /* *max = najwiekszy; */

  /* najmniejszy = tablica[0]; */
  /* for(i = 1; i < size; i++) { */
  /*   if (tablica[i] < najmniejszy) { */
  /*     najmniejszy = tablica[i]; */
  /*   } */
  /* } */
  /* *min = najmniejszy; */
}
