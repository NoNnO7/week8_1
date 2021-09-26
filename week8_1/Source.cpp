#include <stdio.h>
int fact(int n)
{
    return (n < 2) ? 1 : n * fact(n - 1);
}
int main()
{
    int n;
    scanf_s("%d", &n);
    printf("%d", fact(n));
    return 0;
}