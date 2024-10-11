#include<stdio.h>
#include<math.h>
/*
Lập phương trình giải hệ
ax + by = c
dx + ey = f
Ý tưởng Sử dụng định thức Cramer để giải hệ phương trình
Tính các định 
*/
int main(){
    //Nhap cac tham so dau vao
    float x,y;
    float a,b,c,d,e,f;
    printf("Nhap vao 6 tham so dau vao cho he phuong trinh a, b, c, d, e, f: ");
    scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
    //Bat dau giai phuong trinh
    //Tính các định thức sử dụng quy tắc Cramer
    float D, Dx, Dy;
    D=a*e-b*d;
    Dx=c*e-b*f;
    Dy=a*f-c*d;
    printf("Dx=%f\nDy=%f\nD=%f",Dx,Dy,D);
    //Kiểm tra và Kết luận
    if(D!=0){
        printf("\nNghiem cua he ptrinh la: (%.6f , %.6f).",Dx/D,Dy/D);
    } else {
    if((Dx==0)&&(Dy==0)){
        printf("\nHe phuong trinh co vo so nghiem.");
    } else
        printf("\nHe phuong trinh vo nghiem.");
    }
    return 0;
}