#include <stdio.h>
#include <stdlib.h>

int main()
{
int ast;
int satir;
int bosluk;

for(satir=1;satir<=10;satir++) {

        for(bosluk=1;bosluk<=(10-satir);bosluk++){

            printf(" ");
        }

    for(ast=1;ast<=2*(satir)-1;ast++){

            printf("*");



    }
    printf("\t");
    printf("\n");


}





}
