//1/1!+2/2!+3/3!+........+n/n!

#include<stdio.h>
int fact(int n);
int main(){
	float sum=0,i; //since ans is not integer number.
	int n;
	printf("Enter the last term = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum=sum+(float)i/fact(i);    //(float) convert the division to a floating number.
	}
	printf("Summation up to %dth term = %f",n,sum); /*%f represent floating number.*/
return 0;
}
int fact(int n){
	int sum=1,i;
	for(i=1;i<=n;i++){
   	sum=sum*i;
   }
	return sum;
}