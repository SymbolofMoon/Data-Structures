#include<stdio.h>
#include<stdlib.h>


struct node {
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head,*tail;



void create(){
    head=0;
    struct node *newnode,*temp;
    
    int choice;
    while(choice){
        newnode=(struct node *) malloc (sizeof(struct node));
        printf("Enter data");
        scanf("%d",&newnode->data);
        newnode->prev=0;
        newnode->next=0;
        if (head==0){
            head=temp=tail=newnode;
        }
        else{
            temp->next=newnode;
            newnode->prev=temp=tail;
            temp=tail=newnode;
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
  printf("\n");
}

void reverse(){
    struct node *current,*nextnode1;
    current=head;
    
    while(current!=0){
        nextnode1=current->next;
        current->next=current->prev;
        current->prev=nextnode1;
        current=nextnode1;
        
    }
    current=head;
    head=tail;
    tail=current;
}
void main(){


    create();
    display();
    reverse();
    display();
    
   
}    
