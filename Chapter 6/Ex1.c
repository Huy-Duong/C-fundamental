#include<stdio.h>
#include<math.h>
//Xây dựng hàm giải phương trình bậc hai sử dụng con trỏ
int ptb2(float a, float b, float c, float *x1, float *x2);
int main(){
    float a,b,c;
    float x1, x2;
    int s;
    printf("Nhap vao 3 tham so dau vao: ");
    scanf("%f %f %f", &a, &b, &c);
    s = ptb2(a,b,c,&x1,&x2);
    if(s==0)
    printf("\na = 0");
    else if(s == -1)
    printf("\n delta < 0");
    else
    printf("\nx1 = %f , x2 = %f",x1,x2);

    return 0;
}
int ptb2(float a, float b, float c, float *x1, float *x2){
    float delta;
    if(!a) return 0;
    delta = b*b - 4*a*c;
    if(delta<0) return -1;
    *x1 = (-b-sqrt(delta))/(2*a);
    *x2 = (-b+sqrt(delta))/(2*a);
}