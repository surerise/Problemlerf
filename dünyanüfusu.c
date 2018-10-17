#include <stdio.h>
#include <stdlib.h>

int main()
{
int sayac=1;
float nufus=7.4;
double artis=(double) (nufus/100)*1.2;
int yeninufus;

while(sayac!=6){

    nufus=(double)(artis+nufus);

    printf("%d yil sonra yeni nufus:%fmilyar\n",sayac,nufus);
    sayac++;

}

return 0;
}
