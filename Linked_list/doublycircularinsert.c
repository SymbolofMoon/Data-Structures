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
    tail->next=head;
    
}

void insertend(){
    struct node *newnode2;
    newnode2=(struct node *) malloc (sizeof(struct node));
    printf("Enter data");
    scanf("%d",&newnode2->data);
    newnode2->prev=0;
    newnode2->next=0;
    tail->next=newnode2;
    newnode2->prev=tail;
    newnode2->next=head;
    head->prev=newnode2;
    tail=newnode2;
    
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

void main(){
    create();
    display();
    printf("\n");
    insertpos();
    display();
    printf("\n");
    printf("%d",tail->data);
    printf("\n");

}