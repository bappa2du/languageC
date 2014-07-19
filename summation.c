#include<stdio.h>
void main(){
int i=1,sum=0,n;
printf("Enter the last term = ");
scanf("%d",&n);
while(i<=n){
	sum=sum+i;
	i++;}
printf("Summation up to %dth term is %d",n,sum);
}