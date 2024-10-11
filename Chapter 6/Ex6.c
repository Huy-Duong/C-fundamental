#include<stdio.h>
//2 cách sử dụng đối con trỏ cho mảng 2 chiều
//C1: float (*pa)[50]
//float[][50]
//C2: float *pa
// int N
// sử dụng *(pa+N*i+j)
//Bài toán: tính tổng các hàng của ma trận mxn
void tong_h(float a[][50],int m, int n, float *th);


int a=10;
int main(){
    float b[30][50];
    float h[30];
    float x; int m,n;
    //Nhập số liệu
    printf("Nhap vao kich thuoc m va n: ");
    scanf("%d %d",&m,&n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%f",&x);
            b[i][j]=x;
        }
    }
    tong_h(b,m,n,h);

    for (int i = 0; i < m; i++)
    {
        printf("%f \n",*(h+i));
    }  
      
    return 0;
}

void tong_h(float a[][50],int m, int n, float *th){
    for (int i = 0; i < m; i++)
    {
        *(th+i)=0;
        for (int j = 0; j < n; j++)
        {
            *(th+i)+=a[i][j];
        }
        
    }



}