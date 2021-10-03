#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n=7,i,j,x=n/2+1;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==n/2+1 || j==x)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
        if(i<=n/2) x++;
        else x--;
    }
    return 0;
}