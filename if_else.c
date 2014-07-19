#include<stdio.h>
int main(){
int i,n;
for(i=0;i<10;i++)
{printf("Marks=");scanf("%d",&n);
if(n>=80){printf("Grade id A\n");}
else if(n<=79&&n>=70){printf("Grade is B\n");}
else if(n<=69&&n>=50){printf("Grade is C\n");}
else{printf("Grade is F\n");}
}

return 0;
}