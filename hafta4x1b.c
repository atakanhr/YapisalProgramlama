#include <stdio.h>
#include <stdlib.h>



int Enkucuksayi(){
    int x,y,z;
    printf("UC SAYI GIRINIZ");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    if(x<=y&&x<=z)
       return x;
    else if(y<=x&&y<=z)
       return y;
    else if(z<=x&&z<=y)
       return z;



}
void Asal_bulma(){
    int alt,ust;
    printf("ALT VE UST SINIR GIRINIZ\n");
    scanf("%d",&alt);
    scanf("%d",&ust);
    if(ust<2){
        printf("BU ARALIKTA ASAL SAYI YOKTUR\n");
        return;}
    printf("ASAL SAYILAR\n");
    int i,j=0;
    for(i=alt;i<=ust;i++){
        int asalmi=0;
        for(j=2;j<i;j++){

            if(i%j==0){
                asalmi=1;
                break;
            }
        }
        if(asalmi==0&&i!=1){
            printf("%d \n",i);
        }
    }
    printf("\n");
}

void menu()
{
    int menu;
    while(1)
    {
        printf("1-Asal sayi bulma\n");
        printf("2-En kucuk sayi bulma\n");
        printf("3-cikis\n");
        scanf("%d",&menu);
        if(menu==1) {
            Asal_bulma();
        }
        else if(menu==2) {
            printf("EN KUCUK SAYI = %d \n",Enkucuksayi());
        }
        else if(menu==3)
        {
            exit(1);
        }
        else
            printf("HATALI GIRIS");
    }
}
int main()
{
    menu();

    return 0;
}
