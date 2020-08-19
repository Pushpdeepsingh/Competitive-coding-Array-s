#include <stdio.h>

int main()
{
    int i, j, n;

    /* Input rows from user */
    scanf("%d", &n);

    /* Iterate through rows */
    for(i=1; i<=n; i++)
    {
        /* Print spaces in decreasing order of row */
        for(j=i; j<n; j++)
        {
            printf(" ");
        }

        /* Print star in increasing order or row */
        for(j=1; j<=i; j++)
        {
            printf("#");
        }

        /* Move to next line */
        printf("\n");
    }
    
    return 0;
}
