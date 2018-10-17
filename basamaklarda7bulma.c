#include <stdio.h>
#include <stdlib.h>

int main()
{

    int sayi;
    int yedi=0;
    printf("Bir sayi girin: ");
    scanf("%d",&sayi);
    while(sayi%10!=0) {


        if(sayi%10==7) {yedi++;}
        sayi=sayi/10;




    }

    printf("Yedi sayisi:%d",yedi);


return 0;

}
