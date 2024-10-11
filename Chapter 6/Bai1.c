//Giải hệ phương trình bậc nhất sử dụng hàm
#include<stdio.h>
#include<math.h>
int giai_hpt( float a, float b, float c, float d, float e, float f,float *x, float *y);
int main(){
    float a,b,c,d,e,f;
    float x,y;
    printf("Nhap vao 6 so: ");
    scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
    int g = giai_hpt(a,b,c,d,e,f,&x,&y);
    if(g==2){
        printf("\nHe pt co 2 nghiem x1 = %f , x2 = %f",x,y);
    } else if(g==1) 
        printf("\nHe phuong trinh co vo so nghiem.");
    else
        printf("\nHe phuong trinh vo nghiem.");
    return 0;
}
int giai_hpt( float a, float b, float c, float d, float e, float f, float *x, float *y){
    float D, Dx, Dy;
    D=a*e-b*d;
    Dx=c*e-b*f;
    Dy=a*f-c*d;

    //Kiểm tra và Kết luận
    if(D!=0){
        *x=Dx/D;
        *y=Dy/D;
        return 2;
    } else {
    if((Dx==0)&&(Dy==0)){
        return 1;
        
    } else
        return 0;
        
    }
}