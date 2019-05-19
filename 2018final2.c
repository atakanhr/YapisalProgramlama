#include<stdio.h>
#include<stdlib.h>
struct ogr{
    int ogrencino;
    char isim[20];
    int not;

};
void sirala(struct ogr dizi1[]){

    for(int i=0;i<3;i++){
        int enkucuk=dizi1[i].not;
        int index=i;
        for(int j=i+1;j<3;j++){
                if(dizi1[i].not==dizi1[j].not){
                    if(dizi1[i].ogrencino<dizi1[j].ogrencino){
                        struct ogr temp=dizi1[i];
                        dizi1[i]=dizi1[j];
                        dizi1[j]=temp;
                    }
                }
                if (enkucuk>dizi1[j].not){
                    enkucuk=dizi1[j].not;
                    index=j;

                }



        }
        struct ogr temp=dizi1[i];



        dizi1[i]=dizi1[index];
        dizi1[index]=temp;

    }



};

int main(){

struct ogr atakan[3];
atakan[0].not=100;
atakan[0].ogrencino=50;
atakan[1].not=90;
atakan[1].ogrencino=30;
atakan[2].not=100;
atakan[2].ogrencino=20;
sirala(atakan);
printf("1. ogrenci ->not %d 1.ogrenci ->numara %d\n",atakan[0].not,atakan[0].ogrencino);
printf("2. ogrenci ->not %d 1.ogrenci ->numara %d\n",atakan[1].not,atakan[1].ogrencino);
printf("3. ogrenci ->not %d 1.ogrenci ->numara %d",atakan[2].not,atakan[2].ogrencino);






return 0;

}
