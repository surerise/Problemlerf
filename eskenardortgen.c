#include <stdio.h>
#include <stdlib.h>

int main()
{
int ast;
int satir;
int bosluk;

for(satir=1;satir<=5;satir++) {
        for(bosluk=1;bosluk<=(5-satir);bosluk++){
            printf(" ");
        }
    for(ast=1;ast<=2*(satir)-1;ast++){
            printf("*");



    }
    printf("\n");

}
for(satir=5;satir>=1;satir--) {
        for(bosluk=1;bosluk<=(5-satir);bosluk++){
            printf(" ");
        }
    for(ast=1;ast<=2*(satir)-1;ast++){
            printf("*");



    }
    printf("\n");

}

return 0;
}
