#include <stdio.h>
#include <stdlib.h>

//KLAVYEDEN GIRILEN BASARI NOTUNU HARF NOTUNA CEVIREN C PROGRAMI

int main(){

int not;
printf("LUTFEN NOTUNUZU GIRINIZ");
scanf("%d",&not);
if(not<=100&&not>=90){
    printf("HARF NOTUNUZ AA");
}
else if(not>=85&&not<=89){
    printf("HARF NOTUNUZ BA");

}
else if(not<=84&&not>=80){
    printf("HARF NOTUNUZ BB");
}
else if(not<=79&&not>=70){
    printf("HARF NOTUNUZ CB");
}
else if(not<=69&&not>=60){
    printf("HARF NOTUNUZ CC");
}
else if(not<=59&&not>=55){
    printf("HARF NOTUNUZ DC");
}
else if(not<=54&&not>=50){
    printf("HARF NOTUNUZ DD");
}
else if(not<=49&&not>=40){
    printf("HARF NOTUNUZ FD");
}
else if(not<=39&&not>=0){
    printf("HARF NOTUNUZ FF");
}
else {
    printf("LUTFEN NOTUNUZU 0-100 ARALIGINDA YAZINIZ");
}



return 0; }
