#include <stdio.h>
#include <stdlib.h>


int main() {

int atis,gelen;
int bir=0;
int iki=0;
int uc=0;
int dort=0;
int bes=0;
int alti=0;


for(atis=1;atis<=6000000;++atis) {

    gelen=rand()%6+1;

    switch(gelen){
    case 1: ++bir; break;

    case 2: ++iki; break;
    case 3: ++uc; break;
    case 4: ++dort; break;
    case 5: ++bes; break;
    case 6: ++alti; break;


    }


}
printf("1 gelen:%d\n",bir);
printf("2 gelen:%d\n",iki);
printf("3 gelen:%d\n",uc);
printf("4 gelen:%d\n",dort);
printf("5 gelen:%d\n",bes);
printf("6 gelen:%d\n",alti);
return 0;
}

