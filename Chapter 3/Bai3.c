#include<stdio.h>

int main(){
    int i=8,j=9;
    i=j;
    printf("(i=j)++=%d",i++);
    printf("\n i=%d, j=%d",i,j);
    printf("\n i+j++=%d",i+j++);
    printf("\n i=%d, j=%d",i,j);
    int c=i+j;
    printf("\n ++(i+j)=%d",++c);
    printf("\n i=%d, j=%d",i,j);
    printf("\n ++i+++j=%d",++i + ++j);
    printf("\n i=%d, j=%d",i,j);

    return 0;
}