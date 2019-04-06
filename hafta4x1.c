#include<stdio.h>
#include<stdlib.h>

int main()
{
int sayi=15;

while(1){
    int secim;
    printf("1-OYUNA BASLA (1) ");
    printf("1-OYUNU BITIR(-1) ");
    scanf("%d",&secim);
    if(secim==1){
        int tahmin;
        printf("TAHMIN ?");
       while(1){
        scanf("%d",&tahmin);
        if(tahmin>sayi)
            printf("DAHA KUCUK\n");
        else if(tahmin<sayi)
            printf("DAHA BUYUK\n");
        else{
            printf("TEBRIKLER\n");
            break;
        }
       }
    }
    else if(secim==-1){
    break;}
    else
        printf("LUTFEN DOGRU SECIMI GIRINIZ");
}


    return 0;
}
