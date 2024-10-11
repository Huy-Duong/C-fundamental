#include<stdio.h>
#include<math.h>
//Kiểm tra số nguyên tố sử dụng nhãn
// Ý tưởng n là một số là sô nguyên tố nếu nó không chia hết cho các số nguyên trong khoảng từ 2 đến căn 2 của n
int main(){
    int i, n, ng_to=1;
    printf("Nhap so muon kiem tra co phai so nguyen to: ");
    scanf("%d",&n);
    for (int i = 2; i < sqrt(n); i++)
    {
        if((n % i) == 0){
            ng_to=0;
            break;}
    }
    if(ng_to)
        printf("%d la so nguyen to",n);
        else
        printf("%d khong la so nguyen to",n);
    return 0;
}