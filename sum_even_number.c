#include<stdio.h>
int main(){
int i,sum=0;
for(i=50;i<=100;i++)
{if(i%2==0){sum=sum+i;}}
printf("Sum = %d",sum);
return 0;
}