// Cho một dãy số a1, a2, a3, a4.... an
// Tìm trọng lượng lớn nhất của dãy con sử dụng đệ quy
#include <stdio.h>
#include <math.h>
int MaxSub(int a[], int n);
int main()
{
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

    int sol = MaxSub(a,n);
    printf("MaxSub = %d ", sol);
    return 0;
}

int MaxSub(int a[], int n)
{
    int smax = a[0];
    int maxendhere = a[0];
    int imax =1;
    int u,v;
    for (int i = 1; i < n; i++)
    {
        u = maxendhere +a[i];
        v = a[i];
        if (u>v)
            maxendhere = u;
        else
            maxendhere = v;
        if(maxendhere>smax){
            smax = maxendhere;
            imax = i;
        }
    }
    return smax;
}