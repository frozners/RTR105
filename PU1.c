#include <stdio.h>

int main()
{
    printf("Ievadiet divus naturālus skaitļus, kurus sareizināt.");
    long long a, b;

    scanf("%lld %lld", &a, &b);
    printf("%lld",a * b);
    return 0;
}