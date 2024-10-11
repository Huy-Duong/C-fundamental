#include<stdio.h>
#include<math.h>

//Chương trình tính căn bậc hai của một số dương
// Ý tưởng: Sử dụng công thức lặp
//a=X(0)
// X(n+1)=(X(n)^2+a)/(2*X(n)), với n>=0
// Quá trình lặp kết thúc khi:
// |(X(n+1)-X(n))/X(n)|<=0.00001
// abs trị tuyệt đối cho số nguyên, fabs trị tuyệt đối cho số thực

int main(){
    //B1: Nhập các tham số đầu vào
    double a, eps;
    printf("Nhap so duong can tim can bac hai: ");
    scanf("%lf", &a);
    printf("Nhap vao sai so cho phep epsilon: ");
    scanf("%lf",&eps);
    double Xa, Xb;
    double dkd;
    Xb=a;
    //B2: Tính và kiểm tra vòng lặp
    do
    {
        Xa=Xb;
        Xb=(pow(Xb,2)+a)/(2*Xb);
        dkd =fabs((Xb-Xa)/Xa);
        // printf("dkd = %lf",dkd);
    } while (dkd>eps);

    printf("Can bac hai cua %lf la: %.12lf",a,Xb);
    
    return 0;
}