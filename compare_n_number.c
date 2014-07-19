#include<stdio.h>
void main(){
	int i,x,n,temp=0;
	printf("Enter total number : ");
	scanf("%d",&n);
	printf("Enter %d numbers.\n\n",n);
	for(i=1;i<=n;i++){
		printf("Number_%d : ",i);
		scanf("%d",&x);
		if(x>temp){
			printf("\n%d is greater number\n\n",x);
         temp=x;
		}else{
			printf("\n%d is greater number\n\n",temp);
      }
	}
}
			 