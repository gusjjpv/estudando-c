#include <stdio.h>

void inic(int s[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        s[i] = 0;
    }
}

main()
{
    int v[0];
    int x[100];

    inic(v, 10);
    inic(x, 100);
}