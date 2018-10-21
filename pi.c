#include<stdio.h>

int main(void)
{
   double pi=0,x;
   int adim=0;

   for(x=1;x<=300;x=x+2) {

        if(adim%2!=0) {

            pi -=(4/x);

        }
        else {
            pi+=(4/x);
        }
    printf("%d\t%f \n",adim,pi);
    adim++;
   }




    return 0;
}
