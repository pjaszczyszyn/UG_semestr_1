#include <stdio.h>
int int_sumadziel(int a);
void dosk(int l);

int main()
{

    dosk(1000);

    return 0;
}

int int_sumadziel(int a)
{
    int i;
    int s = 1;
    for (i = 2; i < a; i++) {
	if (a % i == 0)
	    s = s + i;
    }
    return s;
}

void dosk(int l)
{
    int n;
    for (n = 2; n <= l; n++) {
	if (int_sumadziel(n) == n)
	    printf("%d \n", n);
    }
}
