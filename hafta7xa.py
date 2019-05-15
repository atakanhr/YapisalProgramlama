#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char harfdonustur(char *y);
char *terskopyala(char *y,int);


int main(int argc, char *argv[]) {
char x[50];
int i;
char *y;
printf("bir sozcuk giriniz");
scanf("%s",&x);
int size=strlen(x);
y=x;
harfdonustur(y);
char *dizi2=terskopyala(y,size);

printf("%s  dizi2\n",dizi2);

return 0;}

char harfdonustur(char *y){

	while((*y)!='\0'){

	if(isupper(*y))
		*y=tolower(*y);
	else if(islower(*y))
		*y=toupper(*y);

	y++;
}
return;
}
char *terskopyala(char *y,int size){
//char k[50];
int i;
char *kk=(char*)malloc(50*sizeof(char));
//char *kk[50];
//kk=&k;
for(i=0;i<size;i++){
	*(kk+i)=*(y+size-(i+1));
}

return kk;
}
