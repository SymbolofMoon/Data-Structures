#include<stdio.h>
#include<stdlib.h>

struct node {

    int data;
    struct node *next;
    struct node *prev;

};

struct node *head,*tail;

void create(){
    struct node *newnode;
    head=0;
    int choice=1;
    while(choice){
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter Data");
        scanf("%d",&newnode->data);
        if (head==0){
            head=tail=newnode;
            head->next=newnode;
            head->prev=newnode;
        }
        else{
            tail->next=newnode;
            newnode->prev=tail;
            newnode->next=head;
            head->prev=newnode;
            tail=newnode;
            

        }
        printf("Do you want to continue(0,1)?");
            scanf("%d",&choice);
            if (choice==0){

            break;
}
        

    }
    
}

void display(){
    struct node *temp;
    temp=head;
    if (head==0){
        printf("List is empty");
    }

    else{
        
        while(temp!=tail){
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