#include<stdio.h>
#include<stdbool.h>

int main(){
    float arr[4];
    printf("Nhap vao 4 so thuc: ");
    for (int i = 0; i < 4; i++)
    {
        scanf("%f", &arr[i]);
    }
    float max=arr[0], min=arr[0];
    //Tim max
    for (int i = 0; i< 3; i++){
        if(arr[i]>=arr[i+1]){
            max= arr[i];
        } else
            max = arr[i+1];
    }
    printf("max = %f\n", max);
    //Tim min
    for (int i = 0; i< 3; i++){
        if(arr[i]<=arr[i+1]){
            min= arr[i];
        } else
            min = arr[i+1];
    }
    printf("min = %f", min);
    return 0;
}