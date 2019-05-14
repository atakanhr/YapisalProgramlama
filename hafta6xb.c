#include<stdio.h>
#include<stdlib.h>


void fonk(int dizi[],int size)
{
    for(int i =0; i<size; i++)
    {
        int j=i;
        int enkucuk=dizi[i];
        for(; j<size; j++)
        {
            if(dizi[i]>dizi[j])
            {
                enkucuk=j;

            }
            int temp=dizi[i];
            dizi[i]=dizi[j];
            dizi[j]=temp;

        }


    }
//sirali dizi basimi
    for(int i =0; i<size; i++)
    {
        printf("%d ",dizi[i]);

    }

}




int main()
{

    int boyut;
    printf("LUTFEN DIZI BOYUTUNU GIRINIZ : ");
    scanf("%d",&boyut);
    printf("LUTFEN ELEMANLARI GIRINIZ : ");
    int dizi[boyut];
    for(int i =0; i<boyut; i++)
    {
        scanf("%d",&dizi[i]);
    }

    fonk(dizi,boyut);


    return 0;

}
