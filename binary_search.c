#include<stdio.h>
int main(){
int beg=0,end=12,mid;
int array[13]={11,22,30,33,40,44,55,60,66,77,80,88,99};
int key=22;
do{
	mid=(int)((beg+end)/2);

	if(key>array[mid]){
		beg=mid+1;
	}else if(key<array[mid]){
		end=mid-1;
	}else{
		printf("At %dth position.",mid+1);
		break;
   }
}while(beg<=end);
if(beg>end){printf("Fail");}
return 0;
}