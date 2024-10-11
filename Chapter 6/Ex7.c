#include<stdio.h>

int main(){
    float a[][2]={1,2,
            4,5,3,6};
    //Các cách in ra ma trận
    printf("\n MA TRAN A \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%8.2f%c",a[i][j],j==1?'\n':' ');
        }
        
    }


    return 0;
}