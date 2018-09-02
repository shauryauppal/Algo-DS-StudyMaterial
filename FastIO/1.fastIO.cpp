#include <bits/stdc++.h>

template<typename T> void scan(T &x)
{
    x = 0;
    bool neg = 0;
    register T c = getchar();

    if (c == '-')
        neg = 1, c = getchar();

    while ((c < 48) || (c > 57))
        c = getchar();

    for ( ; c < 48||c > 57 ; c = getchar());

    for ( ; c > 47 && c < 58; c = getchar() )
        x= (x << 3) + ( x << 1 ) + ( c & 15 );

    if (neg) x *= -1;
}

template<typename T> void print(T n)
{
    bool neg = 0;

    if (n < 0)
        n *= -1, neg = 1;

    char snum[65];
    int i = 0;
    do
    {
        snum[i++] = n % 10 + '0';
        n /= 10;
    }

    while (n);
    --i;

    if (neg)
        putchar('-');

    while (i >= 0)
        putchar(snum[i--]);

    putchar('\n');
}

// Driver Program
int main()
{
    int value;

    // Taking input
    scan(value);

    // Printing output
    print(value);
    return 0;
}
