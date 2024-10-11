#include<stdio.h>

//Chuong trinh thuc hien viec nhân véc tơ
int giai_thua(int n){
    if(n == 1 || n == 0)
        return 1;
    else 
        return n*giai_thua(n-1);

}

int main(){
    // float x[]={4, 6, 8, 3.5}, y[]={2.6, 3.2, 4, 7};
    // int i=0;
    // float s=0.0;
    // while (++i<4)
    // {
    //     s+= x[i]*y[i];
    // }
    // printf("\n Tich vo huong = %.3f",s);
    {
        int n =10;
        // giai_thua(n);
        printf("%d! = %d",n,giai_thua(n));
    }
    return 0;
}