#include<stdio.h>
#include<string.h>

	int sq(int n){
		int sum=0;
		sum=n*n;
	return sum;
	}
void main(){
char *bappa;
int x=2;
printf("Answer = %d",sq(5));
printf("\nEnter your name ");
gets(bappa);
printf("Hellow %s",bappa);
x=x>>2;
printf("\nx=%d",x);
}