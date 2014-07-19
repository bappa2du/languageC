#include<stdio.h>
void main(){
int n;
printf("Enter n = ");
scanf("%d",&n);
printf("Value = %d\nAddress = %x",n,&n);
}