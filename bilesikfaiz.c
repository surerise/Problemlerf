#include <stdio.h>
#include <math.h>


int main(void)  {

    double anapara=1000.00;
    double faiz=.05;
    unsigned int yil;
    double toplam;

    printf("Yil,   Toplam Para\n");
    for(yil=1;yil<=10;++yil) {

        toplam=anapara*pow((1.0+faiz),yil);

        printf("Yil %.2f\n",toplam);
    }


























}
