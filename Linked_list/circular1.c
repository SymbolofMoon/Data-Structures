#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};


struct node *head,*tail;

void create(){
    int choice=1;
    struct node *newnode;
    head=0;
    while(choice){
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter Data");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if (head==0){
            head = tail= newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
        tail->next=head;
        printf("Do you want to continue(0,1)?");
        scanf("%d",&choice);
        if (choice==0){

        break;
}

    }
}

void display(){
    struct node *temp;
    if (head==0){
        printf("List is empty");
    }

    else{
        temp=head;
        while(temp->next!=head){
            printf("%d",temp->data);
            temp=temp->next;
        }
        printf("%d ",temp->data);
    }
}

void main(){
    create();
    display();
    printf("%d",head->data);
    printf("%d",tail->data);
}