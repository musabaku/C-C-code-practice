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
int reversePrint(sn* head) {
       if (head == NULL)
       return ;
 
    // print the list after head node
    reversePrint(head->next);
 
    // After everything else is printed, print head
    printf("%d  ", head->data);
}
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

    first->data = 2;
    first->next = second;

    second->data = 3;
    second->next = third;

    third->data = 4;
    third->next = NULL;
    // display(head);
    reversePrint(head);

    return 0;
}