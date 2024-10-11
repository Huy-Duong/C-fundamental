#include<stdio.h>

int main(){
    int a[3], b=2;
    a[0]=5;
    a[10]=4;
    a[b]=7;
    printf("%d",a[b]);
    return 0;
}