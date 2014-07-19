#include<stdio.h>
int main(){
    char c;
    int sum=0,x;
    printf("Enter the value until \"no\"\n");
    for(;;){
        if(c!='n'){
            scanf("%d",&x);
            sum+=x;
        }else{
            printf("%d\n",sum);
            break;
        }
    }

    return 0;
}
