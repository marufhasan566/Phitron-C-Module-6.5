#include <stdio.h>
int main()
{
    long long int e, m, b, totalkatryoshka = 0;
    scanf("%lld %lld %lld", &e, &m, &b);
    if (e == 0 || b == 0)
    {
        printf("0\n");
    }
    else
    {
        long long minimum = e;
        if (m < minimum)
        {
            minimum = m;
        }
        if (b < minimum)
        {
            minimum = b;
        }
        e = e - minimum;
        m = m - minimum;
        b = b - minimum;
        totalkatryoshka = totalkatryoshka + minimum;
        if (e / 2 < b)
        {
            totalkatryoshka = totalkatryoshka + e / 2;
        }
        else
        {
            totalkatryoshka = totalkatryoshka + b;
        }
        printf("%lld\n", totalkatryoshka);
    }

    return 0;
}