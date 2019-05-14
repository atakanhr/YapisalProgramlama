#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//INORDER SIRASI ILE PRINT EDILMISTIR

void fonksiyon(int dizi[],int uzunluk){
int ortanokta=(uzunluk-1)/2;
if (uzunluk==1){
    printf("%d ",dizi[0]);
    return;
}
if (uzunluk==0){
    return;
}

//BUYUKLER VE KUCUKLER DIZISI OLUSTURMA ALGORITMASI
int kucukler=0;
int buyukler=0;
for(int i =0;i<uzunluk;i++){
    if(dizi[i]<dizi[ortanokta])
        kucukler++;
    else if(dizi[i]>dizi[ortanokta])
        buyukler++;

    }
int dizikucuk[kucukler];
int dizibuyuk[buyukler];
int j =0;
for(int i=0;i<uzunluk;i++){
    if(dizi[i]<dizi[ortanokta]){
        dizikucuk[j]=dizi[i];

        j++;}
    }
    j =0;
for(int i=0;i<uzunluk;i++){
    if(dizi[i]>dizi[ortanokta]){
        dizibuyuk[j]=dizi[i];

        j++;}
    }


/*printf("\nBUYUKLER\n");
for(int i=0;i<buyukler;i++){
    printf("%d",dizibuyuk[i]);
    }
printf("\nKUCUKLER\n");
for(int i=0;i<kucukler;i++){
    printf("%d",dizikucuk[i]);
    }
*/
//BUYUKLER VE KUCUKLER DIZISI OLUSTURMA ALGORITMASI SON


//LEFT ROOT RIGHT INORDER
fonksiyon(dizikucuk,kucukler);
printf("%d ",dizi[ortanokta]);
fonksiyon(dizibuyuk,buyukler);

return;
}


int main(){
int boyut;
printf("Dizinin boyutunu giriniz :");
scanf("%d",&boyut);
int dizi[boyut];
printf("LUtfen dizinin %d eleamnini giriniz: ",boyut);
for(int i =0;i<boyut;i++){
    scanf("%d",&dizi[i]);
}



fonksiyon(dizi,boyut);


return 0;

}
