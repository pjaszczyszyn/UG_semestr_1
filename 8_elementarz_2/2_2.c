#include<stdio.h>

int czy_pierwsza(int n);
int podaj_liczbe(char *prompt);

int main()
{

  int n, jest_pierwsza;

    n=podaj_liczbe("Podaj liczbę całkowitą:");
    jest_pierwsza=czy_pierwsza(n);
    printf("Podana liczba '%d' jest %s\n",
	   n, jest_pierwsza ? "pierwsza" : "złożona");
    return 0;
}

int czy_pierwsza(n){

    int i, jest_pierwsza=1;

   for (i = 2; i <= n / 2; i++) {
	if (n % i == 0) {
	    jest_pierwsza = 0;
	    break;
	}
    }

	
    return jest_pierwsza;
}

int podaj_liczbe(char *prompt){
  int n=0;

  while (n<2){
    printf(prompt);   
   scanf("%d", &n);
  }
   
    return n;


}
