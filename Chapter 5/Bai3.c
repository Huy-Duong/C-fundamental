#include<stdio.h>

#include<math.h>
long long giai_thua(int n);
// int giai_thua(int n);
//Tính e^x
int main(){
    int n=1;
    double x=6.000000, eps=0.00001;
    double ex0;
    double ex1= 1.0000000;
    double c;
    do
    {
        ex0=ex1;
        c = pow(x,n)/giai_thua(n);
        ex1 = ex1+ c;
        n++;
        printf("\nc = %.12lf",c);
        printf("\nex%d= %.12lf ex%d= %.12lf",n-1,ex0,n,ex1);
        printf("\n%.12lf\n",ex1-ex0);
    }while (fabs(ex1-ex0)>eps);
    // while(fabs(ex1-ex0)>eps){
    //     ex0 = ex1;
    //     n++;  
    //     ex1 += pow(x,n)/giai_thua(n);
    //     printf("\nex%d= %.8f ex%d= %.8f",n-1,ex0,n,ex1);
    //     printf("\n%.8f",ex1-ex0);
    // }

    printf("\nKet qua la %.12lf ", ex1);
    return 0;
}
long long giai_thua(int n){
    if(n == 1 || n == 0)
        return 1;
    else 
        return n*giai_thua(n-1);

}
