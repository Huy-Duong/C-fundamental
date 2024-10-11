#include<stdio.h>

int main(){
    {
        int x=10;
        int y=11;
        // Không thận trọng khi sử dụng phép tăng giảm
        printf("\n %6d\n%6d\n%6d", x-- * ++y,x-- - --y, x++ + ++y);
        printf("\nx=%d,y=%d",x,y);

    }
    // {
    //     int x=10, y=11;
    //     printf("\n %6d", x-- * ++y);
    //     printf("\nx=%d,y=%d",x,y);
    //     printf("\n %6d", x-- - --y);
    //     printf("\nx=%d,y=%d",x,y);
    //     printf("\n %6d", x++ + ++y);
    //     printf("\nx=%d,y=%d",x,y);
    // }


    return 0;
}