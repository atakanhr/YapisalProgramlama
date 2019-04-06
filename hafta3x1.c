#include <stdio.h>
#include <stdlib.h>



//NORMAL MANTIK
void ayx(x)
{
    if(x==8)
    {
        printf("31");
    }
    else
    {
        if(x%2==1)
        {
            printf("31");
        }
        else
            printf("30");
    }
}

//DIZI MANTIGI
void ay2(x)
{
    int aylar[12]= {31,30,31,30,31,30,31,31,31,30,31,30};
    printf("\n%d",aylar[x-1]);


}
int main()
{
    int ay;
    while(1)
    {
        printf("LUTFEN AYI GIRINIZ");
        scanf("%d",&ay);

        if(ay>=1&&ay<=12)
        {
            ayx(ay);
            ay2(ay);
            break;

        }
        else
            printf("HATA TEKRAR GIR");
    }




    return 0;
}
