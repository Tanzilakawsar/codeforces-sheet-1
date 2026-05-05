#include<stdio.h>
int main(){
int a;
long long b;
char ch[10];
float c;
double d;
printf("Enter basic data types for int,long long ,char,float,double: ");
scanf("%d\n%lld\n%s\n%f\n%lf",&a,&b,&ch,&c,&d);
printf("The basic data types are:%d\n%lld\n%s\n%f\n%lf\n",a,b,ch,c,d);
return 0;
}
