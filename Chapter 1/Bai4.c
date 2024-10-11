#include<stdio.h>

int main(){
    float bl, lk1,lk2;
    int n;
    scanf("%f %f %d",&bl,&lk1,&n);
    lk2=((bl*n)/26)-lk1;
    printf("Luong ky 2 là: %f", lk2);
    return 0;
}