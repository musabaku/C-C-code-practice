#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    struct node* next;
    int data;
}sn;
void display(sn* ptr){
    while(ptr != NULL){
        printf("data : %d\n",ptr->data);
        ptr=ptr->next;
    }
}
sn* insert_begin(sn* head,int n){
   sn* ptr = (sn*)malloc(sizeof(sn));
   ptr->next = head;
//    head=ptr;
ptr = head;
   ptr->data = n;
   return head;

}
sn* insert_middle(){}
int main(){
    sn* head;
    sn* first;
    sn* second;
    sn* third;

    head = (sn*)malloc(sizeof(sn));
    first = (sn*)malloc(sizeof(sn));
    second = (sn*)malloc(sizeof(sn));
    third = (sn*)malloc(sizeof(sn));

    head->data = 1;
    head->next = first;

    first->data = 11;
    first->next = second;

    second->data = 111;
    second->next = third;

    third->data = 1111;
    third->next = NULL;
    display(head);
    insert_begin(head,5);
    display(head);


    return 0;
}