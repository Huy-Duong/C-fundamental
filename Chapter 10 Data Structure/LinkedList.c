#include<stdio.h>

//Tạo node đơn giản

struct Node{
    int data;
    struct Node *next;
};


int main(){
    ///Tạo một danh sách bằng cách khai báo con trỏ head
    struct Node *head = NULL;
    char moreNode;
    do
    {
        fflush(stdin);
        printf("Hay nhap vao 1 gia tri: ");
        int number;
        scanf("%d", &number);
        //Tạo ra node
        struct Node *newNode;
        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = number;
        newNode->next = NULL;

        ///Chèn node mới vào
        newNode->next = head;
        head = newNode;

        //Muốn nhập tiếp không?
        printf("Ban co muon nhap tiep hay ko? (Y/N)");
        fflush(stdin);
        scanf("%c",&moreNode);
    } while (moreNode == 'Y'|| moreNode == 'y');
    





    return 0;
}