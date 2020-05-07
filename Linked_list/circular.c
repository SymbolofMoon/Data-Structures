#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};


struct node *head;

void create(){
    int choice=1;
    struct node *newnode,*temp;
    head=0;
    while(choice){
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter Data");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if (head==0){
            head = temp= newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        temp->next=head;
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
}