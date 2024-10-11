#include<stdio.h>
#include<math.h>

int main(){
    //Điều kiện đề bài là Delta không âm nên phương trình bậc hai luôn có nghiệm
    float a,b,c;
    printf("Nhap cac tham so dau vao a,b,c: ");
    scanf("%f %f %f",&a,&b,&c);
    //Khối lệnh giải phương trình bậc 2
    {
        if (a==0)
        {
            float x=(-c/b);
            printf("Phương trinh bac hai co nghiem x = %f",x);
        }
        else{
            float delta= b*b-4*a*c;
            if (delta<0)
            {
                printf("Phương trinh bac hai vo nghiem");
            }
            else{
                float x1=(-b-sqrt(delta))/(2*a);
                float x2=(-b+sqrt(delta))/(2*a);
                if (delta==0)
                {
                    printf("Phuong trinh co nghiem kep x = %f",x1);
                }
                else{
                printf("Phuong trinh co nghiem x1= %f, x2=%f",x1,x2);
                }
            }
            
        }
        
    }

    return 0;
}