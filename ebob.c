#include <stdlib.h>
#include <stdio.h>


int ebob(int x,int y);
int ebob(int x,int y){

unsigned int enbuyuk;
int sayac;

for(sayac=1;sayac<=999;sayac++){

    if(x%sayac==0&&y%sayac==0){

        enbuyuk=sayac;
    }



}



    return enbuyuk;
}
int main(){
int d,e;
printf("iki sayi girin:");
scanf("%d %d",&d,&e);
printf("Ebob:%d",ebob(d,e));
return 0;
}
