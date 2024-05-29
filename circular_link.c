#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;

void insert_end(int val){
   
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node) );

    temp -> data = val;
    temp -> next = head;

    if(head == NULL){
        head = temp;
        return;
    }
    while(ptr -> next != head){
        ptr = ptr -> next;
    }
    ptr -> next = temp;
    return;

} 
int main(){
    do
    {
        printf("1. Insert at End\n");
    }
switch(choice)
    {
    case 1:
        printf("enter value to insert at end: ");
        scanf("%d",&val);
        insert_end(val);
        break;

    case 2:
        display();
        break;
    }