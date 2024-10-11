#include<stdio.h>
#include<math.h>
//Tính tổ hợp chập m của n
long long giai_thua(int n);
long long to_hop(int m, int n);
int main(){
    {
        int m,n;
        m=3, n=10;
    printf("To hop chap %d cua %d la %d",m,n,to_hop(m,n));

    }
    return 0;
}
long long to_hop(int m, int n){
    long long kq=1;
    int dkd=n-m+1;
    while(n>=dkd){
        kq *= n;
        n--;
    }
    return kq/giai_thua(m);
}
long long giai_thua(int n){
    if(n == 1 || n == 0)
        return 1;
    else 
        return n*giai_thua(n-1);
}