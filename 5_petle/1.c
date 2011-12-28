#include <stdio.h>
#include <math.h>

int main()
{
    int x = 1, i = 1;
    x = pow(2, 0);
    while (x <= 2010) {


	printf("2^%d = %d\n", i, x);
	x = pow(2, i);
	++i;
    }
    return 0;
}
