#include <stdio.h>
#include <math.h>

double przeciwprostokatna(double a, double b);
void pobierz_dwa_double(char* prompt, double *px, double *py);

int main(int argc, char *argv[]) {
  double a, b, c;

  pobierz_dwa_double("Podaj dwie liczby: ", &a, &b);
  c = przeciwprostokatna(a, b);
  printf("a = %lf b = %lf c = %lf\n", a, b, c);
  return 0;
}

double przeciwprostokatna(double a, double b) {
double c;
c = pow(a,2) + pow(b,2);
c = sqrt(c);
  return c;
}

void pobierz_dwa_double(char *prompt, double *px, double *py) {
  printf(prompt);
  scanf("%lf %lf", px, py);
}