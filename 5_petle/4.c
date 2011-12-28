#include <stdio.h>

int main()
{
  int a, suma=0, i = 1,mniejsza=0;

  do{
    printf("Podaj górną granicę: ");
    scanf("%d", &a);

    if(a<1){
      printf("Podałeś liczbę mniejszą od 1.\n");
	     mniejsza=1;
	     }
    else mniejsza=0;
    }while(mniejsza==1);

    while (i <= a) {
      suma+=i;
	++i;
    }
	printf("%d\n",suma);
    return 0;
}
