#include <stdlib.h>
#include <stdio.h>


int ters(int x);
int ters(int x){

int swap;
int kalan;
int bn;
swap=x;
while(swap>0){

    kalan=swap%10;

    bn=bn*10+kalan;
    swap=swap/10;

}

return bn;

}
int main(){
int sayi;
printf("Bir sayi girin:");
scanf("%d",&sayi);
printf("Tersi:%d",ters(sayi));



return 0;
}

