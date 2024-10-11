#include<stdio.h>
#include<math.h>

#define e 2.718281828

float f(float a);
float osumf(float a, float h, int n);
float esumf(float a, float h, int n);
int main(){
    //Đầu vào
    float a=0;
    float b=1;
    int n=10;
    float h= (b-a)/(2*n);
    float kq;
    printf("f(a) = %.8f f(b) = %.8f \nosum = %.8f esum = %.8f", f(a),f(b),osumf(a,h,n),esumf(a,h,n));
    //Tính
    kq = (h/3)*(f(a)+f(b)+4*osumf(a,h,n)+2*esumf(a,h,n));
    //In ra kết quả
    printf("\nKet qua la %.8f",kq);
    return 0;
}
float f(float a){
    return sin(pow(a,2))/pow(e,a);
}
float osumf(float a, float h, int n){

    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += f(a+h*(2*i+1));
    }
    return sum;

}
float esumf(float a, float h, int n){

    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += f(a+h*(2*i));
    }
    return sum;

}
