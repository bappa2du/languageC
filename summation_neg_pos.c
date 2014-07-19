#include<stdio.h>
void main(){
int i,sum=0,k=1,n;
printf("Enter the number of term = ");
scanf("%d",&n);
for(i=2;i<=2*n;i+=2){
	sum=sum+i*k;
	k=-1*k;
	}
printf("Summation = %d",sum);
}