#include<stdio.h>
void main(){
FILE *file;
char *bappa;
file=fopen("file.txt","a");
fputs("HELLOW ABIR",file);
fclose(file);

file=fopen("file.txt","r");
fgets(bappa,60,file);
printf("%s",bappa);
}