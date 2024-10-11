#include<stdio.h>
#include<math.h>
//Tính đa thức f(x) cấp n
void da_thuc(int n, float a[], float x , float *f);
int main(){
    int n = 10;
    float a[]={1.23,2.46,3,45,23,42,-9,48,-2,9};
    float x =2.32;
    float kq;
    da_thuc(n,a,x,&kq);
    for (int i=0; i<n; i++)
        printf("%f*x^(%d) + ",*(a+(n-1-i)),i);

    printf("\nKet qua da thuc f(%f) = %.8f",x,kq);
    return 0;
}
void da_thuc(int n, float a[], float x , float *f){
    *f =0;
    for (int i = 0; i < n; i++){
        *f+=pow(x,i)* a[n-1-i];
    }    
}