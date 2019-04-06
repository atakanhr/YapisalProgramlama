#include <stdio.h>
#include <stdlib.h>
//3 basamakli sayinin onlar basamagindaki rakam tek mi cift mi


int main(){
int x;
printf("LUTFEN BIR SAYI GIRINIZ = ");
scanf("%d",&x);
if(x<=999&&x>=100){
    int y =x/10;
    y%=10;
    if(y%2==0){
        printf("SAYINIZIN ONLAR BASAMAGI %d ve cift",y);

    }
    else{
        printf("SAYINIZIN ONLAR BASAMAGI %d VE TEK",y);

    }
}

else{
    printf("HATALI GIRIS");
}






return 0;}

