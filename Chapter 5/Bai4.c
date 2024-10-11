#include<stdio.h>

#include<math.h>
//Tính khai triển của sin(x) với độ chính xác 0.00001 theo công thức
long long giai_thua(int n);
int main(){
    //Bước 1: Nhập các đầu vào
    int n = 0;
    int x=3;
    double eps = 0.00001;
    double ex0, ex1=0;
    //Ex0 sử dụng để tính điều kiện dừng
    //Gán xấp xỉ đầu cho ex0 = 0
    do
    {
        ex0=ex1;
        ex1+=pow(-1,n)*(pow(x,2*n+1)/giai_thua(2*n+1));
        n++;
        printf("\nex%d=%.12lf ex%d=%.12f",n-1,ex0,n,ex1);
        printf("\n%.12lf",ex1-ex0);
    } while (fabs(ex1-ex0)>eps);
    


    return 0;
}
long long giai_thua(int n){
    if(n == 0|| n==1)
        return 1;
    else
        return n*giai_thua(n-1);
}