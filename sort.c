#include <stdio.h>

int main()
{
    int a,b,c,order;
    printf("Ievadies trīs naturālus skaitļus.");
    fflush(stdout);
    scanf("%d%d%d",&a,&b,&c);
    printf("Vai vēlaties kārtošanu dilstošā, vai augošā secībā: 1/2");
    scanf("%d",&order);

    if (order == 1){
        if (a>b,b>c){
            printf("%d\n%d\n%d",a,b,c);
        }
        if (a>b,c>b,a>c){
            printf("%d\n%d\n%d",a,c,b);
        }
        if (b>a,a>c){
            printf("%d\n%d\n%d",b,a,c);
        }
        if (b>a,c>a,b>c){
            printf("%d\n%d\n%d",b,c,a);
        }
        if (c>a,a>b){
            printf("%d\n%d\n%d",c,a,b);
        }
        if (c>a,b>a,c>b){
            printf("%d\n%d\n%d",c,b,a);
        }
    }
    if (order == 2){
       if (a>b,b>c){
            printf("%d\n%d\n%d",c,b,a);
        }
        if (a>b,c>b,a>c){
            printf("%d\n%d\n%d",b,c,a);
        }
        if (b>a,a>c){
            printf("%d\n%d\n%d",c,a,b);
        }
        if (b>a,c>a,b>c){
            printf("%d\n%d\n%d",a,c,b);
        }
        if (c>a,a>b){
            printf("%d\n%d\n%d",b,a,c);
        }
        if (c>a,b>a,c>b){
            printf("%d\n%d\n%d",a,b,c);
        }
    }

    return 0;
}