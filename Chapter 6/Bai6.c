#include<stdio.h>
#include<math.h>

//Sử dụng phương pháp GJ tìm ma trận nghịch đảo
//Viết được thuật toán thì sẽ code được. Khá giống với phương pháp Gauss để giải ma trận
//Nếu phần tử a[i][i] cuối cùng bằng 0 thì lập tức đc chuyển sang quá trình GJ mà ko cần đổi hàng do nó là hàng cuối không thể tìm được phần tử sau nó
int main(){
    int n;
    scanf("%d",&n);
    float arr[n][2*n];
    float r;
    float *pa;
    pa = (float*) arr;
    float arr1[n*2];
    printf("Nhap vao ma tran [A]: \n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%f",&arr[i][j]);
        }
        
    }

    // //In ra ma trận ban đầu
    // printf("\n");
    // for (int i = 0; i < n*n; i++)
    // {
    //     printf("%f%c",*(pa+i),(i+1)%(n)==0?'\n':' ');
    // }
    //Quá trình GJ
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j< 2*n; j++)
        {
            if((j-i)== n){
                arr[i][j]=1;
            } else {
                arr[i][j]=0;
            }
        }
        
    }
        printf("\n");
    //In ra ma trận [A|E]
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*n; j++)
        {
            printf("%f ", arr[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
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
                for (int l = 0; l < 2*n; l++)
                {
                    arr[k][l]-= arr[i][l]*r; 
                }
                }
            }
            
        }
        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*n; j++)
        {
            printf("%f ", arr[i][j]);
        }
        printf("\n");
    }
        printf("\n");
    }
    float s;
    for (int i = 0; i < n; i++)
    {
        s = arr[i][i];
        for (int j = 0; j < 2*n; j++)
        {
            arr[i][j]/=s;
        }
        
    }
    
    
    

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*n; j++)
        {
            printf("%f ", arr[i][j]);
        }
        printf("\n");
    }
    
    printf("Ma tran nghich dao la: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j < 2*n; j++)
        {
            printf("%f ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}