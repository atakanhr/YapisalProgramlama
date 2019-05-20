#include<stdio.h>
#include<stdlib.h>

struct fib{

        int data;
        struct fib *next;

};

struct fib* fib_liste(int sayi){
struct fib *fibo=NULL;


for(int i=1;i<=sayi;i++){
    struct  fib *temp=fibo;
    struct  fib *temp2=fibo;
if(fibo==NULL){
    temp=(struct fib*)malloc(sizeof(struct fib));
    temp->next=NULL;
    temp->data =fib_bul(i);
    fibo=temp;
    continue;

}
while(temp!=NULL){
    temp2=temp;
    temp=temp->next;
}
    temp=(struct fib*)malloc(sizeof(struct fib));
    temp->next=NULL;
    temp->data =fib_bul(i);
    temp2->next=temp;

}


return fibo;
}


int fib_bul(int x){
    int first=0;
    int second=1;
    int temp;
    while(x!=1){
        temp=second;
        second=first+second;
        first=temp;
        x--;
    }
    return first;


}

int main(){

struct fib *fibox=fib_liste(10);
while(fibox!=NULL){
    printf("%d ",fibox->data);
    fibox=fibox->next;
}



return 0;


}
