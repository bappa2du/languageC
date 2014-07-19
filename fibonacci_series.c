#include<stdio.h>
int main(){
int a=0,b=1,c,sum=0,i;
printf("%d %d ",a,b);
sum=a+b;
for(i=3;i<=14;i++){
c=a+b;
printf("%d ",c);
sum=sum+c;
a=b;b=c;
}
printf("\nSum=%d",sum);
return 0;
}