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
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("%d\n",temp->data);
    }
}
void insertbeg(){
    struct node *newnode1;
    newnode1=(struct node *)malloc(sizeof(struct node));
   
    printf("Enter data to insert at beginning");
    scanf("%d",&newnode1->data);
    newnode1->next =head;
    head=newnode1;
    tail->next=newnode1; 


}
void insertend(){
    struct node *newnode2;
    newnode2=(struct node *)malloc(sizeof(struct node));
   
    printf("Enter data to insert at end");
    scanf("%d",&newnode2->data);
    newnode2->next =head;
    
    tail->next=newnode2; 


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






void main(){
    create();
    display();
    insertpos();
    display();
    
}