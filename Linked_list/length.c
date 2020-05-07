#include<stdio.h>
void main()
{
    struct node
{
    int data;
    struct node *next;
};

struct node *head,*newnode,*temp;
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

  temp=head;
  while(temp!=0){
      printf("%d ",temp->data);
      temp=temp->next;
  }
  int count=0;
    struct node *tmp;
    tmp=head;
    while(tmp!=0){
        count++;
        tmp=tmp->next;
    }
    printf("length of linked list is %d",count);

  getlength();
  }


void getlength()
{
    
}
