#include<stdio.h>
void main(){
int i,ch=0,j=2;
printf("Enter the number = ");
scanf("%d",&i);
while(j<=i/2)
{
if(i%j==0){
	printf("%d is not a prime number",i);
	ch=1;
	break;
	}
else{
	j++;
	}
}
if(ch==0){printf("%d is a prime number",i);}
}