#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool check(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

void solve()
{
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n / 2; i++)
        if (check(i))
        {
            if (check(n - i))
                printf("%d %d ", i, n - i);
        }
    printf("\n");
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
        solve();
    return 0;
}
