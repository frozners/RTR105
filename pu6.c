#include <stdio.h>

void pirma(){
    printf("Ievadiet divus naturālus skaitļus, kurus sareizināt.");
    long long a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld",a * b);
    return;
}
int otra(){
    int b;
    printf("Ievadiet saskaitāmo: " );
    scanf("%d",&b);
    b=b+2022;
    return b;
}
void tresa(int x){
    x = x + 2022;
    printf("Rezultāts ir: %d", x);
    return;
}
int ceturta(int y){
    y = y + 2022;
    return y;
}

int main(){

    pirma();
    getch();

    int b;
    b=otra(); 
    printf("rezultāts ir: %d", b);
    getch();

    int x;
    printf("Ierakstiet skaitli: ");
    scanf("%d",&x);
    tresa(x);
    getch();

    int y;
    printf("Ierakstiet skaitli: ");
    scanf("%d",&y);
    printf("Rezultāts ir: %d", ceturta(y));
    getch();

    return 0;
}