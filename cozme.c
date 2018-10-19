#include <stdio.h>
#include <stdlib.h>

int main() {

int ilk,sayi,uc,iki,dort;


printf("Sifre:");
scanf("%d",&sayi);

iki=(sayi%100)/10; sayi=sayi/100;
ilk=(sayi%1000)/100; sayi=sayi/1000;
dort=(sayi%10); sayi=sayi/10;
uc=sayi;

printf("Girilen kod:%d%d%d%d",ilk,iki,uc,dort);
return 0;
}
