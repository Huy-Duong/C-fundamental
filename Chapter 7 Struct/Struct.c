#include<stdio.h>

//Tạo 1 struct về thông tin chi tiết từng cầu thủ
struct Player
{
    int Age;
    char Name[1000];
    int id;
};

int main(){
    struct Player p2;
    struct Player p1 = {10, "Annie", 201801};
    p2.id = 13;
    printf("%s %d", p1.Name, p2.id);

    return 0;
}