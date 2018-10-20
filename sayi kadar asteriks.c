#include <stdio.h>
#include <stdlib.h>

int main()
{
int sayac;
int sayi;
int ast;
for(sayac=1;sayac<=5;sayac++){
printf("Bir sayi girin:");
scanf("%d",&sayi);
    for(ast=1;ast<=sayi;ast++){
        printf("*");
    }
printf("\n");
}
return 0; }
