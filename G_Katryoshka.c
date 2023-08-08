#include <stdio.h>
int main()
{
    long long int e, m, b, sum = 0;
    scanf("%lld %lld %lld", &e, &m, &b);
    if (e < m && e < b)
    {
        // printf("%lld is the minimum value\n",e);
        sum = sum + e;
        printf("%lld\n", sum);
    }
    else if (m < e && m < b)
    {
        // printf("%lld is the minimum value\n",m);
        sum = sum + m;
        e = e - m;
        b = b - m;
        if ((e / 2) > b)
        {
            sum = sum + b;
            printf("%lld\n", sum);
        }
        else if (b > (e / 2))
        {
            sum = sum + (e / 2);
            printf("%lld\n", sum);
        }
    }
    else if (b < e && b < m)
    {
        // printf("%lld is the minimum value\n",b);
        sum = sum + b;
        printf("%lld\n", sum);
    }
    else
    {
        printf("0\n");
    }
    return 0;
}