#include <stdlib.h>
#include <stdio.h>

int carpanlar(int x);
int carpanlar(int x){

    int y=1;
    int carpanlartoplami;
    while(y<=x-1){

        if(x%y==0){
            carpanlartoplami+=y;
        }
       y++;
    }

    return carpanlartoplami;
}
int main(){
int sayi;
printf("bir sayi girin: ");
scanf("%d",&sayi);

if(sayi==carpanlar(sayi)){

    printf("Mukemmmeeel");

}
else{printf("Mukemmel sayi degil :(");}

return 0;
}
