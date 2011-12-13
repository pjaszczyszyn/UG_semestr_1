#include <stdio.h>
#include <math.h>

int main() {

  float x,y,z,k;


  printf("Podaj wartość początkową: ");
  scanf("%f", &x);

  printf("Podaj wartość końcową: ");
  scanf("%f", &y);

  printf("Podaj krok: ");
  scanf("%f", &k);

  if((x<0) || (y<0)){
    printf("Podaj liczbę większą lub równą 0\n");
    return 0;
  }

  z=(y-x)/k;

  while (z>=0){

    printf(" %.4f  %.4f \n", x , sqrtf(x));
    x=x+k;
    --z;
  }




  return 0;
}
