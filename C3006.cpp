#include<stdio.h>
#include<math.h>
void solve(int t)
{
    int n;
    scanf("%d", &n);
    printf("Test %d: ", t);
    int i;
    for (i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
        {
            int dem = 0;
            while (n % i == 0)
            {
                n /= i;
                dem++;
            }
            printf("%d(%d) ", i, dem);
            if (n == 1)
            {
                printf("\n");
                return;
            }
        }
    if (n > 1)
        printf("%d(1)\n", n);
}

int main()
{
    int T;
    scanf("%d", &T);
    int t;
    for (t = 1; t <= T; t++)
        solve(t);
    return 0;
}