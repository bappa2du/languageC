#include<stdio.h>
void main(){
int A[3][4]={1,2,4,3,5,6,6,8,0,9,6};
int i,j;
for(i=0;i<3;i++){
	for(j=0;j<4;j++){
		printf("%d\t",A[i][j]);
	}
	printf("\n");
}
}