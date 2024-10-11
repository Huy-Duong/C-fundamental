#include<stdio.h>
//Đối là mảng một chiều
//Viết chương trình có hàm tính tổng các giá trị của mảng nhập vào
//Tên của mảng đã chính là địa chỉ của phần tử đầu tiên
 double sum(double *a,int n);
int main(){
    int n=4;
    double a[4]={1.345,2.67,3.56,4.587},s;
    s=sum(a,n);
    printf("Sum = %lf",s);

    return 0;
}
double sum(double *a,int n){
    double s;
    for(int i = 0; i < n; i++ )
        s+= *(a+i);

    return s;
}