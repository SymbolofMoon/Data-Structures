#include<stdio.h>
void main(){

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head,*newnode;

void create(){
    head=0;
    struct node *temp;
    int choice;
    while(choice){
        newnode=(struct node *) malloc (sizeof(struct node));
        printf("Enter data");
        scanf("%d",&newnode->data);
        newnode->prev=0;
        newnode->next=0;
        if (head==0){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        printf("Do you want to continue?");
        scanf("%d",&choice);
        if (choice==0){

             break;
             }
    }
    
}

void display(){
    struct node *temp;
    temp=head;
    while(temp!=0){
      printf("%d ",temp->data);
      temp=temp->next;
  }
}



    create();
    display();
    getchar();

}    
