#include<stdio.h>
#include<math.h>

//Sử dụng phương pháp GJ giải HPT
//Viết được thuật toán thì sẽ code được. Khá giống với phương pháp Gauss để giải ma trận
int main(){
    int n;
    scanf("%d",&n);
    float arr[n][n+1];
    float r;
    float *pa;
    pa = (float*) arr;
    float arr1[n+1];
    printf("Nhap vao ma tran [A]: \n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%f",&arr[i][j]);
        }
        
    }
    printf("Nhap vao vecto B: \n");
    for (int i=0, j=n; i < n; i++)
    {
            scanf("%f", &arr[i][j]);
    }
    

    //In ra ma trận ban đầu
    printf("\n");
    for (int i = 0; i < (n)*(n+1); i++)
    {
        printf("%f%c",*(pa+i),(i+1)%(n+1)==0?'\n':' ');
    }
    printf("\n");
    //Quá trình GJ
    for (int i = 0; i < n; i++)
    {
        if (arr[i][i]==0)
        {
            for (int j = i+1; j < n; j++)
            {
//Nếu a[j][i] mà cũng bằng không thì tìm tiếp nếu bằng n rồi thì kluan suy biến, không thì đổi hàng
                if (arr[j][i]==0)
                {
                    if(j==(n-1)){
                        printf("\nMa tran suy bien");
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
                        goto qtrinh_GJ;
                    }
                    
                }
                
            }
            
        }
        else
        {
            qtrinh_GJ: for (int k = 0; k < n; k++)
            {
                r= arr[k][i]/arr[i][i];
                if(k==i){
                    continue;
                } else{
                for (int l = 0; l < n+1; l++)
                {
                    arr[k][l]-= arr[i][l]*r; 
                }
                }
            }
            
        }
        for (int i = 0; i < (n)*(n+1); i++)
        {
            printf("%f%c",*(pa+i),(i+1)%(n+1)==0?'\n':' ');
        }
        printf("\n");
    }
    //Quá trình ngược
    for (int i = 0; i < (n)*(n+1); i++)
    {
        printf("%f%c",*(pa+i),(i+1)%(n+1)==0?'\n':' ');
    }
    float x[n];
    // x[n-1]= (arr[n-1][n]/arr[n-1][n-1]); 
    float sum;
    for (int i = 0; i < n; i++)
    {
        x[i]=arr[i][n]/arr[i][i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("x[%d]=%f\n",i+1,*(x+i));
    }
    



    return 0;
}