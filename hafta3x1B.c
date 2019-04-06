#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anasayi=15;
    while(1)
    {
        int x;
        printf("Sayinizi giriniz= ");
        scanf("%d",&x);
        if(x<anasayi)
            printf("DAHA BUYUK\n");
        else if(x>anasayi)
            printf("DAHA KUCUK\n");
        else
        {
            printf("DOGRU BILDIN DEVAM ETMEK ICIN 1 BITMEK ICIN -1 = ");
            int devam;
            scanf("%d",&devam);
            if (devam == -1)
                break;
            if(devam==1)
                continue;
        }



    }
    return 0;
}
