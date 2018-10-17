#include <stdio.h>
#include <stdlib.h>

int main()
{

int sayi;
int sonuc=1;
int gecici;
printf("Sayi:");
scanf("%d",&sayi);
while(sayi!=1) {

    gecici=sayi;
    sonuc=gecici*sonuc;

    sayi--;





}

    printf("Sonuc:%d",sonuc);
return 0;

}
