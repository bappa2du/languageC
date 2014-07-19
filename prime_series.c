#include<stdio.h>
void main(){
int num1,i,j,num2;
printf("enter the range ");
scanf("%d",&num1);
printf("to ");
scanf("%d",&num2);
for(j=num1;j<=num2;j++){
for(i=2;i<=j-1;i++){
	if(j%i==0){break;}
}
if(j==i||j==1){printf("%d ",j);}
}
}