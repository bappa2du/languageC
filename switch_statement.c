#include<stdio.h>
int main(){
int n;
void add(int a,int b){
 printf("%d",a+b);
}
printf("Enter the value of n");
scanf("%d",&n);
switch(n){
	case 1: printf("Thank you");break;
	case 2: printf("Welcome");break;
	case 3: add(4,6);break;
	default: printf("Good boy");break;
	}
return 0;
}