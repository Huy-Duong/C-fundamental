#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//Giải phương trình AX=B sử dụng phương pháp khử Gauss với A là ma trận vuông cấp n
int main(){
    FILE *ptr, *ptr1;
    ptr = fopen("D:\\Msteams\\2022.2\\C Practice\\Chapter 6\\datainput.txt","r");
    ptr1 = fopen("D:\\Msteams\\2022.2\\C Practice\\Chapter 6\\dataoutput.txt","w");
    int n;
    fscanf(ptr,"%d",&n);
    float arr[n][n+1];
    float r;
    float *pa;
    pa = (float*) arr;
    float arr1[n+1];
    // printf("Nhap vao ma tran [A]: \n");
    // for (int i = 0; i < (n)*(n+1); i++)
    // {
    //     scanf("%f",pa+i);
    // }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            fscanf(ptr,"%f",&arr[i][j]);
        }
        
    }
    // printf("Nhap vao vecto B: \n");
    for (int i=0, j=n; i < n; i++)
    {
            fscanf(ptr,"%f", &arr[i][j]);
    }
    

    //In ra ma trận ban đầu
    fprintf(ptr1,"\n");
    for (int i = 0; i < (n)*(n+1); i++)
    {
        fprintf(ptr1,"%f%c",*(pa+i),(i+1)%(n+1)==0?'\n':' ');
    }
    fprintf(ptr1,"\n");
    //Quá trình khử
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i][i]==0)
        {
            for (int j = i+1; j < n; j++)
            {
//Nếu a[j][i] mà cũng bằng không thì tìm tiếp nếu bằng n rồi thì kluan suy biến, không thì đổi hàng
                if (arr[j][i]==0)
                {
                    if(j==(n-1)){
                        fprintf(ptr1,"\nMa tran suy bien");
                        break;
                    }
                    continue;
                } else {
                    for (int  h = 0; h < n+1; h++)
                    {
                        //Đổi chỗ 2 hàng cho nhau
                        arr1[h]=arr[i][h];
                        arr[i][h] = arr[j][h];
                        arr[j][h]=arr1[h];
                        goto qtrinh_khu;
                    }
                    
                }
                
            }
            
        }
        else
        {
            qtrinh_khu: for (int k = i+1; k < n; k++)
            {
                r= arr[k][i]/arr[i][i];
                for (int l = 0; l < n+1; l++)
                {
                    arr[k][l]-= arr[i][l]*r; 
                }
                
            }
            
        }
        for (int i = 0; i < (n)*(n+1); i++)
        {
            fprintf(ptr1,"%f%c",*(pa+i),(i+1)%(n+1)==0?'\n':' ');
        }
        fprintf(ptr1,"\n");
    }
    //Quá trình ngược
    for (int i = 0; i < (n)*(n+1); i++)
    {
        fprintf(ptr1,"%f%c",*(pa+i),(i+1)%(n+1)==0?'\n':' ');
    }
    float x[n];
    x[n-1]= (arr[n-1][n]/arr[n-1][n-1]); 
    float sum;
    for (int i = n-2; i >= 0; i--)
    {
        sum =0 ;
        for (int j = i+1; j < n ; j++)
        {
            sum+=arr[i][j]*x[j];
        }
        x[i] = (arr[i][n]-sum)/arr[i][i]; 
    }
    for (int i = 0; i < n; i++)
    {
        fprintf(ptr1,"x[%d]=%f\n",i+1,*(x+i));
    }
    

    return 0;
}