#include <stdio.h>
#include <stdlib.h>

int sani(int x,int y,int z);

int sani(int x,int y,int z){



    return x*3600+y*60+z;
}
int main(){
int saat;
int dakika;
int saniye;
   printf("Saat Dakika Saniye girin:");
   scanf("%d %d %d",&saat,&dakika,&saniye);
   printf("12den beri su kadar saniye gecmis:%d",sani(saat,dakika,saniye));

return 0;
}
