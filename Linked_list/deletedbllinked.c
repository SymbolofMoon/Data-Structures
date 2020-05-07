#include<stdio.h>
#include<stdlib.h>
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
  printf("\n");
}

void deletebegin(){
    struct node *temp;
    temp=head;
    head=head->next;
    
   free(temp);
}
void deleteend(){
    struct node *temp,*temp1;
    temp=head;
    while(temp->next!=0){
     
      temp=temp->next;
  }
  temp1=temp->prev;
  temp1->next=0;
  printf("\n");
  printf("%d",temp->data);
  free(temp);
  printf("\n");
  printf("%d",temp->data);
  printf("\n");
}

void deletepos(){
    printf("----------------------------------------Deleting from Position----------------------------------\n");
    struct node *temp,*temp1;
    int pos,i=1;
    printf("Enter position vats");
    scanf(" %d",&pos);
    temp=head;
    while(i+1<pos){
        temp=temp->next;
        i++;
    }
    temp1=temp->next;
    temp->next=temp1->next;
    temp1->next->prev=temp;
    printf("%d",temp1->data);
    free(temp1);
    printf("\n");
    printf("%d",temp1->data);
}
    create();
    display();
    deletepos();
    printf("\n");
    display();
    printf("\n");

    getchar();

}    
