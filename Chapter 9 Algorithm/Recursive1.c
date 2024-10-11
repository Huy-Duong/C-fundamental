// Cho một dãy số a1, a2, a3, a4.... an
// Tìm trọng lượng lớn nhất của dãy con sử dụng đệ quy
#include <stdio.h>
#include <math.h>
int MaxLeft(int a[], int i, int j, int *p1);
int MaxRight(int a[], int i, int j, int *p1);
int MaxSub(int a[], int i, int j, int *p1, int*p2);
int main()
{
    int pi1, pi2;
    int a[100];
    int n;
    int a1=0;
    FILE *ptr;
    ptr = fopen("D:\\Msteams\\2022.2\\C Practice\\Chapter 9 Algorithm\\datainput1.txt", "r");
    fscanf(ptr,"%d",&n);
    for (int i = 0; i < n; i++)
    {
        fscanf(ptr, "%d", &a[i]);
    }
    fclose(ptr);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    int sol = MaxSub(a,a1,n-1,&pi1,&pi2);
    printf("MaxSub = %d ", sol);
    printf("\nSubArray: (vs TH day so nho thi tim dc) ");
    for (int i = pi1; i <= pi2; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
int MaxLeft(int a[], int i, int j, int*p1)
{
    int maxSum = -10000;
    int sum = 0;
    for (int k = j; k >= i; k--)
    {
        sum += a[k];
        if (sum > maxSum){
            maxSum = sum;
            *p1 = k;}
    }
    return maxSum;
}
int MaxRight(int a[], int i, int j, int *p1)
{
    int maxSum = -10000;
    int sum = 0;
    for (int k = i; k <= j; k++)
    {
        sum += a[k];
        if (sum > maxSum){
            maxSum = sum;
            *p1=k;}
    }
    return maxSum;
}
int MaxSub(int a[], int i, int j, int*p1, int*p2)
{
    if (i == j)
        return a[i];
    else
    {
        int m = (i + j) / 2;
        int wL = MaxSub(a, i, m,p1,p2);
        int wR = MaxSub(a, m + 1, j,p1,p2);
        // int wL = MaxLeft(a, i, m,p1);
        // int wR = MaxRight(a, m + 1, j,p2);
        int wM = MaxLeft(a, i, m, p1)  + MaxRight(a, m + 1, j,p2);
        // int wM = wL + wR;
        if (wL >= wR)
        {

            if (wL >= wM)
                return wL;
            else
                return wM;
        }
        else
        {
            if (wR >= wM)
                return wR;
            else
                return wM;
        }
    }
}