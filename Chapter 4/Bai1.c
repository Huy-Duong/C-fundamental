//Nhap ma tran nguyên cỡ 6x6
#include<stdio.h>

int main(){
    int matrix[6][6];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("Nhap vao phan tu arr[%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
        
    }
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}