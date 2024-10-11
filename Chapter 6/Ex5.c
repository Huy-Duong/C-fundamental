#include<stdio.h>
//Sử dụng biến trung gian
//Tính tích của 2 ma trận
int main(){
    {
        float a[3][4], b[4][2], c[5][2], x;
//Nhập vào ma trận a
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%f",&x);
            a[i][j]=x;
        }
    }
//Nhập vào ma trận b
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%f",&x);
            b[i][j]=x;
        }
    }
//Tính c=a*b
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            c[i][j]=0;
            for (int z = 0; z < 4; z++)
            {
                c[i][j]+=a[i][z]*b[z][j];
            }
            
        }
    }
//In ra kết quả
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%f ",a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%f ",b[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%f ",c[i][j]);
        }
        printf("\n");
    }
    


    }


    return 0;
}