#include<stdio.h>
int main(){
int data[8]={2,45,65,22,94,12,21,78};
int i=0,max=data[i],loc=0;
while(i<8)
{
i=i+1;
if(max<data[i]){max=data[i];loc=i;}
}
printf("LOCATION=%d\nVALUE=%d",loc+1,max);
return 0;
}