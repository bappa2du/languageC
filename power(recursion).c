#include<stdio.h>
int pwr(int,int);
int main(){
    int m,n;
    printf("Enter the number = ");scanf("%d",&m);
    printf("Enter the power = ");scanf("%d",&n);
    printf("%d^%d = %d",m,n,pwr(m,n));
    return 0;
}
int pwr(int m,int n){
    if(n==1) return m;
    else return m*pwr(m,n-1);
}
