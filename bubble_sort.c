#include<stdio.h>
void main(){
	int A[9]={23,45,12,6,89,8,34,11,25};
	int i,j,swap;
	for(j=0;j<=7;j++){
		for(i=0;i<=8;i++){
			if(A[i]>A[i+1]){
				swap=A[i];
				A[i]=A[i+1];
				A[i+1]=swap;
			}
		}
	}
	for(i=0;i<=8;i++){
		printf("%d ",A[i]);
	}
}