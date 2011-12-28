/* Program ten wypisuje liczby z tablicy tabela[]
   w odwrotnej kolejności: 12, 6, 4, 2, 1 */
#include <stdio.h>
int main()
{
    int tabela[] = { 1, 2, 4, 6, 12 }, i;
    for (i = 4; i >= 0; i--)
	printf("%d ", tabela[i]);
    return 0;
}
