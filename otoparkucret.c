#include <stdio.h>
#include <stdlib.h>
float ucret(float x);
int main(){


int araba1,araba2,araba3;

printf("Arabalarin durma sureleri:");
scanf("%d %d %d",&araba1,&araba2,&araba3);

printf("Araba\tSure\tUcret\n");
printf("1\t%d\t%f\n",araba1,ucret(araba1));
printf("2\t%d\t%f\n",araba2,ucret(araba2));
printf("3\t%d\t%f\n",araba3,ucret(araba3));

}
float ucret(float x){

 if(x<=3.00){

    return 3.00;
 }
 else{

    return x+(x-3.00)*0.5;
 }

}
