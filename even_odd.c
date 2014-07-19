#include<stdio.h>
void main(){
int i,a,b;
printf("Even & odd numbers between 40 and 65\n");
printf("\nEven numbers are-->\n");
for(i=40;i<=65;i++){if(i%2==0)printf("%d ",i);}
printf("\n\nOdd numbers are-->\n");
for(i=40;i<=65;i++){if(i%2!=0)printf("%d ",i);}
}