//Viet chuong trinh tao hinh
#include<stdio.h>

int main(){
    for (int i = 0; i < 11; i++)
    {
        printf("* \t");
    }
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if ((j>=(5-i))&& (j<= (5+i))){
                // for (int j = 5-i; j<=5+i; j++)
                // {
                    printf("  \t");
                // }
                    
            } else
                printf("* \t");
        }
    printf("\n");
    }
    for (int i = 0; i < 11; i++)
    {
        printf("* \t");
    }
    

    return 0;
}