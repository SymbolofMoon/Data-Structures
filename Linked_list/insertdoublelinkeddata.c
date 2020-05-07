#include<stdio.h>
#include <stdlib.h>
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

void insertbeg(){
    
    

    struct node *newnode1;
    
    newnode1=(struct node *) malloc (sizeof(struct node));
    printf("Enter data");
    scanf("%d",&newnode1->data);
    newnode1->prev=0;
    newnode1->next=0;
    head->prev = newnode1;
    newnode1->next=head;
    head=newnode1;
    
}

void insertend(){
    struct node *newnode2;
    newnode2=(struct node *) malloc (sizeof(struct node));
    printf("Enter data");
    scanf("%d",&newnode2->data);
    newnode2->prev=0;
    newnode2->next=0;
    struct node *temp;
    temp=head;
    while(temp->next!=0){
      
      temp=temp->next;
  }
    temp->next=newnode2;
    newnode2->prev=temp;
    
    
}
void insertpos(){
    printf("----------------Insert at position----------------------------------\n");
    int pos,i=1;
    printf("Enter position vats");
    scanf(" %d",&pos);
    struct node *temp,*newnode3;
    newnode3=(struct node *) malloc(sizeof(struct node));
    printf("Enter Number you want to insert!\n");
    scanf("%d",&newnode3->data); 
    temp=head;
    while (i<pos){
        temp=temp->next;
        i++;
    }
    newnode3->next=temp->next;
    temp->next->prev=newnode3;
    newnode3->prev=temp;
    temp->next=newnode3;

}

    create();
    display();
    
    insertpos();
    display();
 //   printf("%p",head->prev);
    printf("\n");

}    





