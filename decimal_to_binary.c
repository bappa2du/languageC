#include<stdio.h>
int main(){
	int n,i=0,final;
	int A[20];
	printf("Enter number = ");
	scanf("%d",&n);
	while(n>1){
		if(n%2!=0)
			{n=(int)(n/2);A[i]=1;i++;}
		else
      	{n=(n/2);A[i]=0;i++;}
	}
	A[i]=1;
   final=i;
	printf("\nBinary equivalent = ");
	for(i=final;i>=0;i--)
		printf("%d",A[i]);
	return 0;
}