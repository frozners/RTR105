#include <stdio.h>

int main()
{
    unsigned char a;
    int b, i = 1, sum = 0;

    printf("Ievadiet naturālu skaitli.");
    fflush(stdout);
    scanf("%hhd", &a);
    b = a;

    while( b > 0 ){
    a = a % 2;
    b = b >>1;
    sum = sum + (a * i);
    i = i * 10;
    a = b;
    }

    printf("Skaitļa binārais kods ir: %d", sum);
    return 0;
}