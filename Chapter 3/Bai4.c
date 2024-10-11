#include<stdio.h>

int main(){
    //Kiem tra so nguyen to
    int n;
    printf("Nhap 1 so trong khoang tu 1 den 10:");
    scanf("%d",&n);
    //Ham kiem tra so nguyen to
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            break;
            printf("%d khong phai so nguyen to: ", n);
        }
    }
    printf("%d la so nguyen to",n);
    
    return 0;
}