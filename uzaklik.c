#include<stdio.h>
#include<conio.h>
#include<math.h>


int mesafe(int x1,int y1,int x2,int y2);
int mesafe(int x1,int y1,int x2,int y2){
float a,b,c;
    a=pow(x2-x1,2.0);b=pow(y2-y1,2.0);

    c=sqrt(a+b);

    return c;
}
int main(){
int x1,x2,y1,y2;
printf("ilk noktanin koordinatlari: ");
scanf("%d %d",&x1,&y1);
printf("ikinci noktanin koordinatlari: ");
scanf("%d %d",&x2,&y2);

printf("%d",mesafe(x1,y1,x2,y2));







return 0;
}
