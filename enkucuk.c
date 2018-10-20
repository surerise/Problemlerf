#include <stdio.h>
#include <stdlib.h>

int main()
{

int min,sayac,sayi,gecici=999;


printf("Kac tane sayi girelecek:");
scanf("%d",&sayac);


while(sayac!=0){

printf("Bir sayi girin:");
scanf("%d",&sayi);

if(sayi<gecici) {

    gecici=sayi;
    min=sayi;


    }
     --sayac;
}


printf("Sayilerin en kucugu:%d",min);

    return 0;
}
