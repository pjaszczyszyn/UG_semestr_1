#include<stdio.h>

/* Program wylicza sume liczb naturalnych
od 1 do n (podanego przez uzytkownika.
Dla liczby mniejszej od 1 program wypisuje blad
i prosi o ponowne wprowadzenie liczby */

int main()
 {
   int a = 1;
   int n,i, suma;

   printf("Podaj liczbe naturalna wieksza niz 1: \n");
  scanf("%d",&n);

  if(n < 1)
    {
      while (n < 1) {
printf("Blad: liczba mniejsza niz '1'\n Podaj liczbe wieksza niz 1: \n");
  scanf("%d", &n);
      }
     }
 
  for(i = 1; i <= n; i++)
   {
      suma = a + i;
     

      printf("1 + %d = %d\n", i, suma);
}
  
return 0;
}

/* Przy podani blednej liczby (mniejszej niz 1), program dodaje
jeszcze jedna 1 */
