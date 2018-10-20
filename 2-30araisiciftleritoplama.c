#include <stdio.h>
#include <stdlib.h>

int main()
{

int bas;
int toplam=0;

for(bas=2;bas<=30;bas=bas+2) {

    toplam=toplam+bas;


}

printf("2-30 arasý cift sayilerin toplami:%d",toplam);



    return 0;
}

