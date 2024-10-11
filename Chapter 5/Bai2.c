#include<stdio.h>
//Lập chương trình để
//Nhập một dãy số từ bàn phím
//Tính trung bình cộng các số dương và trung bình cộng các số âm trong dãy số trên
/*
Thuật toán
B1: Tạo mảng và nhập dữ liệu
B2: Tạo các biến đếm và biến cộng
B3: Duyệt mảng và tính toán
*/
int main(){
    int countp, countn, sump, sumn;
    int n;
    printf("Tong so ma ban muon nhap vao: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    countn=countp=sumn=sump=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>0){
            countp++;
            sump+=arr[i];
        }
        else if (arr[i]<0)
        {
            countn++;
            sumn+=arr[i];
        }        
    }
    printf("Trung binh day so duong la: %.6f\n",(float) sump/countp);
    printf("Trung binh day so am la: %.6f",(float) sumn/countn);

    return 0;
}