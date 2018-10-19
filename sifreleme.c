#include <stdio.h>
#include <stdlib.h>

int main() {

int sayi,dort,uc,iki,yenisayi;
int ilk;

//sayıyı alma
printf("4 basamakli bir sayi girin: ");

scanf("%d",&sayi);

//şifreleme kısmı
dort=sayi%10; sayi=sayi/10;

uc=sayi%10; sayi=sayi/10;

iki=sayi%10; sayi=sayi/10;

ilk=sayi;


ilk= (ilk*1000+7)/10;
iki= (iki*100+7)/10;
uc=(uc*10+7)/10;
dort=(dort*10+7)/10;
//şifrenlenmiş sayıyı çıktı alma

printf("Sifre:%d%d%d%d",uc,dort,ilk,iki);

return 0;
}

