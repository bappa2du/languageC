#include<stdio.h>
void main(){
int A[3][3]={1,2,3,4,5,6,7,8,9};
int i,j,k,n;
printf("Enter your choice 1 or 2\nAns: ");
scanf("%d",&n);
switch(n){
	case 1:	printf("Matrix A = \n\n\t");
				for(i=0;i<=2;i++){
				for(j=0;j<=2;j++){
				printf("%d\t",A[i][j]);
				}
				printf("\n\t");
				}
            break;
	case 2:	printf("Diagonal Matrix A = \n\n\t");
				for(i=0;i<=2;i++){
				for(j=0;j<=i;j++){
				printf("%d\t",A[i][j]);
				}
				printf("\n\t");
				}
				break;
	default: printf("Diagonal Matrix A = \n\n\t");
				for(i=0;i<=2;i++){
				for(j=i;j<=2;j++){
				printf("%d",A[i][j]);
				printf("\t");
				}
				printf("\n\t");
				}
}
}