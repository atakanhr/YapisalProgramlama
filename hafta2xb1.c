#include <stdio.h>
#include <stdlib.h>
int main(){
int kanbasinci,yas,test1;
printf("KANBASINCINI GIRINIZ =");
scanf("%d",&kanbasinci);
printf("YASINI GIRINIZ =");
scanf("%d",&yas);
printf("TESTSONUCU GIRINIZ =");
scanf("%d",&test1);

if(kanbasinci<100){
    printf("KISI SAGLIKLIDIR");
}
else if(yas>50&&test1>=100){
    printf("KISI HASTADIR");
}
else if(yas<=50&&yas>35&&test1>150){
    printf("KISI HASTADIR");
}
else if(yas<=35&&test1>=100){
    printf("KISI HASTADIR");
}
else{
    printf("KISI SAGLIKLIDIR");
}

return 0;}
