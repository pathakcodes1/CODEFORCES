#include<stdio.h>

struct pie{
float pi;
}a;
struct area{
int r;
float areac;
struct pie a;
}a2;
int main(){

printf("enter the val of radius");
scanf("%d",&a2.r);
printf("enter the value of pie");
scanf("%l",&a2.a.pi);
int areac=(a2.a.pi)*(a2.r)*(a2.r);
printf("%d",areac);
return 0;
}
