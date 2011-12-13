/* zlicz znaki odstępu, tabulacji 
i nowego wiersza */
#include <stdio.h>

int main()
{
    int c;
    int nb, nt, nl;

    nt = 0;
    nl = 0;
    nb = 0;

    while ((c = getchar()) != EOF) 
	if (c == ' ')
	    ++nb;
	else if (c == '\t')
	    ++nt;
	else if (c == '\n')
	    ++nl;
    

    printf("%d %d %d\n", nb, nt, nl);

    return 0;
}
