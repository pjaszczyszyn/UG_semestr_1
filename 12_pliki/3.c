#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
  FILE *fileout;  /* uchwyt do pliku wyjściowego */
  double r, srednia, suma;
  int x;

  if (argc != 2) {
    printf("Użycie: %s DEST\n", argv[0]);
    return 3;
  }
  if ((fileout = fopen(argv[1], "w")) == NULL) {
    printf("Nie mogę otworzyć pliku do zapisu '%s'\n", argv[1]);
    return 2;
  }

  printf("Zapisuję dane do pliku: %s\n", argv[1]);

  x = 0;
  while (x++<1000) {
    r = random();
    suma += r;
    srednia = suma/x;
    fprintf(fileout, "%d %.2f %.2f\n", x,r, srednia);
  }

  fclose(fileout);

  return 0;
}
