#include <stdio.h>
#include <stdlib.h>

int main(){
int x;
int onlar;
int birler;
printf("KLAVYEDEN BIR DEGER GIRINIZ = ");
scanf("%d",&x);
if(x>=1000&&x<=9999){
    birler=x%1000;
    onlar=(x/10)%100;
    if((onlar+birler)%2==0)
        printf("ONLAR VE BIRLER BASAMAKLARI RAKAMLARI TOPLAMI CIFTTIR");
    else
        printf("ONLAR VE BIRLER BASAMAKLARI RAKAMLARI TOPLAMI TEKTIR");
}
else
    printf("HATALI GIRDI");





return 0;}
