#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i;
    for ( i = 1; i <= n; i++)
    {
    	int j;
        for ( j = 1; j <= n - i; j++)
            printf("~");
        for ( j = 1; j <= n; j++)
        {
            if (i == 1 || i == n)
                printf("*");
            else
            {
                if (j == 1 || j == n)
                    printf("*");
                else
                    printf(".");
            }
        }
        printf("\n");
    }
    return 0;
}
