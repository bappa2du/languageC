#include<stdio.h>
//#include<conio.h>
#define pf printf
void main(){
int A[3][3],B[3][3],C[3][3];
int i,j,k;
//clrscr();
pf("Element of Matrix A:\n\n");
for(i=0;i<=2;i++){
	for(j=0;j<=2;j++){
		scanf("%d",&A[i][j]);
	}
}
printf("\nElement of Matrix B:\n\n");
for(i=0;i<=2;i++){
	for(j=0;j<=2;j++){
		scanf("%d",&B[i][j]);
	}
}
printf("\nMatrix A=\n\t\t");
for(i=0;i<=2;i++){
	for(j=0;j<=2;j++){
		printf("%d\t",A[i][j]);
	}
	printf("\n\t\t");
}
printf("\nMatrix B=\n\t\t");
for(i=0;i<=2;i++){
	for(j=0;j<=2;j++){
		printf("%d\t",B[i][j]);
	}
	printf("\n\t\t");
}

printf("\nMatrix C = Matrix A + Matrix B\n\t\t");
for(i=0;i<=2;i++){  
	for(j=0;j<=2;j++){
		C[i][j]=A[i][j]+B[i][j];
		printf("%d\t",C[i][j]);
	}
	printf("\n\t\t");
}
printf("\nMatrix C = Matrix A - Matrix B\n\t\t");
for(i=0;i<=2;i++){
	for(j=0;j<=2;j++){
		C[i][j]=A[i][j]-B[i][j];
		printf("%d\t",C[i][j]);
	}
	printf("\n\t\t");
}

//getch();
}