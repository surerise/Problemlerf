#include <stdio.h>
#include <stdlib.h>

int main() {

int sayi,dort,uc,iki,ilk,yenisayi;

//sayıyı alma
printf("4 basamakli bir sayi girin: ");

scanf("%d",&sayi);

//şifreleme kısmı
dort=sayi%10; sayi=sayi/10;

uc=sayi%10; sayi=sayi/10; uc=(uc+7)/10;

iki=sayi%10; sayi=sayi/10; iki=(iki+7)/10;

ilk=sayi; ilk=(ilk+7)/10;


//şifrenlenmiş sayıyı çıktı alma
yenisayi=uc*1000+dort*100+ilk*10+iki;

printf("Sifrelenmis veri: %d",yenisayi);

return 0;
}
