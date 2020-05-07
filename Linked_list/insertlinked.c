#include<stdio.h>
#include<stdlib.h>
void main()
{
   struct node
{
    int data;
    struct node *next;
};

struct node *head,*newnode;
void create(){
    struct node *temp;
    head = 0;
  int choice;
  while(1){
 newnode=(struct node *) malloc(sizeof(struct node));

 printf("Enter data ");

scanf("%d",&newnode->data);
 printf("%p",newnode);
newnode->next=0;
if(head==0){
    head=temp=newnode;
}
else{
    temp->next=newnode;
    temp=newnode;
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
    while(temp!=0){
    printf("%d ",temp->data);
    temp=temp->next;
  }
   printf("\n");

}
 void  insertbeg(){
printf("----------------------------Insert at beggining-------------------\n");
struct node *newnode1;
newnode1=(struct node *) malloc(sizeof(struct node));
printf("Enter Number you want to insert!\n");
scanf("%d",&newnode1->data);
newnode1->next=head;
head=newnode1;

  }

void insertend(){
    printf("----------------Insert at end----------------------------------\n");
    struct node *temp,*newnode2;
    newnode2=(struct node *) malloc(sizeof(struct node));
    printf("Enter Number you want to insert!\n");
    scanf("%d",&newnode2->data); 
    temp=head;
    while (temp->next!=0){
        temp=temp->next;
    }
    temp->next=newnode2;
    
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
    temp->next=newnode3;

}


create();
display();
insertpos();
display();


  
  
  


}  