#include<stdio.h>
#include<stdlib.h>
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

void delete_from_beg(){
    printf("Deleting from beginning\n");
    struct node *temp;
    temp=head;
    head=head->next;
    free(temp);
}
void deleteend(){
    printf("----------------------------------------deleting from end----------------------------------\n");
    struct node *temp,*temp1;
    temp=head;
    while(temp->next->next!=0){
   
    temp=temp->next;
  }
    temp1=temp->next;
    temp->next=0;
    free(temp1);
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
    temp->next=temp->next->next;
    free(temp1);


}
  void main()
{
  create();
  display();
  deletepos();
  display();
  
  }