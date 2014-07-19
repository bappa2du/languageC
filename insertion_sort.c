  #include<stdio.h>
void main(){
	int A[9]={0,77,33,44,11,88,22,66,55};  //taking A[0] as extra element
	int k,temp,i;
	A[0]=-2000;    			//setting A[0] -infinity
	for(k=2;k<=8;k++){   	//for k=2
		temp=A[k];   			//temp=A[2]=33
		i=k-1;       			//i=k-1=1
		while(temp<A[i]){   		//A[2]<A[1]
			A[i+1]=A[i];     		//A[2]=A[1]
			i=i-1;           		//i=0
		}
	A[i+1]=temp;           	//A[2]=temp=33
	}
	for(k=1;k<=8;k++){
		printf("%d ",A[k]);
	}
}