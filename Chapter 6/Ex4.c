#include<stdio.h>
//Con trỏ và mảng 2 chiều
// Câu hỏi đặt ra: Thử sử dụng con trỏ để nhập ma trận
//Ma trận thực chất là 1 mảng trong đó mỗi phần tử là 1 mảng
int main(){
    // {float a[2][3];
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         scanf("%f", &a[i][j]);
    //     }
        
    // }
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%f ", a[i][j]);
    //     }
    //     printf("\n");
    // }
    //}
    // {
    //     float a[2][3], *pa;
    //     pa = (float*)a;
    //     for (int i = 0; i < 6; i++)
    //     {
    //         scanf("%f",pa+i);
    //     }
    //     for (int i = 0; i < 6; i++)
    //     {
    //         printf("%f ",*(pa+i));
    //         if((i+1)%3==0){
    //             printf("\n");
    //         }
    //     }

    // }
    

    //Mở rộng nhập số liệu cho ma trận cấp mxn
    // int m,n;
    // printf("Nhap vao kich thuoc ma tran m va n:");
    // scanf("%d %d",&m,&n);
    // float a[m][n], *pa;
    // pa = (float*)a;
    // for (int i = 0; i < m*n; i++)
    // {
    //     scanf("%f",pa+i);
    // }
    // for (int i = 0; i < m*n; i++)
    // {
    //     printf("%f ",*(pa+i));
    //     if((i+1)%n==0){
    //             printf("\n");
    //         }
    // }
    

    //Hoặc
    float a[50][50];
    int m,n;
    printf("Nhap vao m va n: ");
    scanf("%d %d",&m,&n);
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%f", (float*)a+ 50*i+j);
        }
        
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%f ", (float*)*(a+ 50*i+j));
            
        }
        printf("\n");
    }
    return 0;
}