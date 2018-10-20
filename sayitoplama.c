#include <stdio.h>


int main() {

int sayac;
int sayi;
int toplam=0;


printf("Kac sayi toplanacak:");
scanf("%d",&sayac);


while(sayac!=0){

printf("Sayi girin:");
scanf("%d",&sayi);

toplam=toplam+sayi;
--sayac;

}

printf("Toplam:%d",toplam);
return 0;
}




