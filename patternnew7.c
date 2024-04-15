#include <stdio.h>
int min(int a, int b)
{
    return a < b ? a : b;
}
int main()
{
    int n = 4;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            int dist = min(min(i, 2 * n - i), min(j, 2 * n - j));
            int val = n - dist + 1;
            printf("%d ", val);
        }
        printf("\n");
    }

    return 0;
}