#include<stdio.h>
#include<math.h>
//Nhân ma trận A cấp mxn với vector X cấp n
float ham_nhan(int );
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    float arr[m][n];
    float *pa;
    pa = (float*) arr;
    printf("Nhap vao ma tran tu ban phim:\n");
    for (int i = 0; i < m*n; i++)
    {
        scanf("%f", pa+i);
    }
    printf("Ma tran vua nhap la: \n");
    for (int i = 0; i < m*n; i++)
    {
        printf("%f%c",*(pa+i),(i+1)%n==0?'\n':' ');
    }
    //Vector cần nhập
    float ar1[n];
    float ar2[m];
    for (int i = 0; i < n; i++)
    {
        scanf("%f", ar1+i);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%f ", *(ar1+i));
    }
    printf("\n");
    //Thực hiện việc nhân ma trận với vector
    for (int i = 0; i < m; i++)
    {
        ar2[i]=0;
        for (int j = 0; j < n; j++)
        {
            ar2[i]+=arr[i][j]*ar1[j];
        }   
    }
    for (int i = 0; i < m; i++)
    {
        printf("%f ",*(ar2+i));
    }
    

    return 0;
}