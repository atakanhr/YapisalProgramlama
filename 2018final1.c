#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void donustur(char str1[],char str2[]){
    char *ptr1=str1;
    char *ptr2=str2;
    int i=0;
    while(1){
        if(*(ptr1+i)=='\0'){
            break;

        }
        if(!isdigit(*(ptr1+i))){
            *(ptr2+i)=' ';
            i++;
            continue;
            }



        if(isdigit(*(ptr1+i))){
            *(ptr2+i)=*(ptr1+i);
             i++;
            continue;
           }


        }
    printf("%s",str2);
}







int main(){
    char atakan[50]="A1B2C345";
    char iki[50];
    donustur(atakan,iki);


return 0;

}
