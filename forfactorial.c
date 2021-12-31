#include <stdio.h>

int main()
{
    int quest;
    printf("Izvēlieties datu tipu: char - 1; int - 2; long long - 3");
    scanf("%d",&quest);
    if (quest == 1){

        char skaitlis;

        int x=1, check=1;
        int i=1;
        printf("Ierakstiet skaitli");
        scanf("%hhu",&skaitlis);

        for(i=1;i<=skaitlis;i++){
            x = x*i;
        }
        if (skaitlis == 0){
            printf("%lld",x);
            return 0;
        }
        i = 1;

        for(i=1;i+1<=skaitlis;i++){
            check = check*i;
        }

        if ( x / skaitlis == check){
            printf("%lld",x);
        }

        else{
            printf("Diemžēl programma nevar parādīt pareizo atbildi.");
        }
        return 0;
    }
    if (quest == 2){

        int skaitlis;

        int x=1, check=1;
        int i=1;
        printf("Ierakstiet skaitli");
        scanf("%d",&skaitlis);
        for(i=1;i<=skaitlis;i++){
            x = x*i;
        }
        if (skaitlis == 0){
            printf("%lld",x);
            return 0;
        }
        i = 1;
        for(i=1;i+1<=skaitlis;i++){
            check = check*i;
        }

        if ( x / skaitlis == check){
            printf("%lld",x);
        }

        else{
            printf("Diemžēl programma nevar parādīt pareizo atbildi.");
        }
        return 0;
    }
    if (quest == 3){

        long long skaitlis;
        
        int x=1, check=1;
        int i=1;
        printf("Ierakstiet skaitli");
        scanf("%lld",&skaitlis);
        for(i=1;i<=skaitlis;i++){
            x = x*i;
        }
        if (skaitlis == 0){
            printf("%lld",x);
            return 0;
        }
        i = 1;
        for(i=1;i+1<=skaitlis;i++){
            check = check*i;
        }

        if ( x / skaitlis == check){
            printf("%lld",x);
        }

        else{
            printf("Diemžēl programma nevar parādīt pareizo atbildi.");
        }
        return 0;     
    }
}