#include<stdio.h>

int main(){
    float a,b,c,d;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    float mul=a*b*c*d;
    printf("Tich 4 so la: %.12f\n",mul);
    printf("Tich 4 so la: %.12f\n",a);
    printf("Tich 4 so la: %.12f\n",b);
    printf("Tich 4 so la: %.12f\n",c);
    printf("Tich 4 so la: %.12f",d);
    return 0;
}