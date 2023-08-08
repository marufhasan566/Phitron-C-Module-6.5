#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("Multiplication Table From 1 to %d Is Shown Below\n\n", n);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}