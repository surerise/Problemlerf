#include <stdio.h>
#include <stdlib.h>
int fib(int x);

int main(){

int sayi;

printf("Bir sayi girin:");

scanf("%d",&sayi);

printf("Fibonacci:%d",fib(sayi));

return 0;

}

int fib(int x) {

if(x==0||x==1){

    return x;

}

else{

    return fib(x-1)+fib(x-2);

}

}
