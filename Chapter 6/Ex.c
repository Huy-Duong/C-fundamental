#include<stdio.h>
// //Giải quyết bài toán đổi giá trị của 2 biến cho nhau sử dụng hàm và đối con trỏ
// void hoan_vi (float *px, float *py);

// int main (){
//     // char *a;
//     // a = "duong thai huy";
//     float a = 2.5, b= 8.6;
//     hoan_vi(&a,&b);
//     printf("\na = %.2f b = %.2f",a,b);
//     return 0;
// }

// void hoan_vi (float *px, float *py){
//     float c;
//     c = *px;
//     *px = *py;
//     *py = c;
// }
int main(){
    int arr[][3]={(2,3,4),
            (3,4,6),
            (5,6,7)};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            arr[i][j]/=arr[i][i];
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j<3; j++)
        {
           printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}