#include <stdio.h>
int fib(int n)
{
    if (n == 0)
    {
        return 1;
    }

    else if (n == 1)
    {
        return 1;
    }

    else
    {

        return fib(n - 1) + fib(n - 2);
    }
}
int main()
{
    int a = fib(5);
    printf("fib is %d", a);
    return 0;
}