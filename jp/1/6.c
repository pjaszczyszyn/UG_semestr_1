#include <stdio.h>
#include <math.h>

int main() {

  long double x,y;


  printf("podaj liczbe rzeczywista: ");
  scanf("%Lf", &x);

  if (x<0){
    printf("\n koniec \n\n");

    return 0;
  }

  y=sqrtl(x);
  printf("pierwiastek kwadratowy z %.15Lf to %.20Lf \n", x, y);
  //lf po 15 znakach to smieci lepiej uzyc long double chyba 30 znakow
  return 0;
}
