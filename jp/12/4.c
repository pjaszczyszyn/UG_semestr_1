#include <stdio.h>

int main(int argc, char *argv[]) {
 int  tablica[128];
  int c;
  int wyczysc=128;
  int wypisz;

  while (wyczysc-->=0)
    tablica[wyczysc]=0;

  while ((c = fgetc(stdin)) != EOF) {
    if (c >= 3  && c <= 8)
      break;
    if (c < 0 || c> 127){
      printf("2\n");
      break;
    }
    tablica[c]++;
  }

  wypisz=32;
  while(wypisz++<126)
    printf("\nliczba znaków %c  = %d",(char) wypisz, tablica[wypisz]);

  return 0;
}
