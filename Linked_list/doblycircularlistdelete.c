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
    printf("\n");
}

void deletebegin(){
    printf("----------------------------Delete at begin--------------------------");
    struct node *temp;
    temp=head;
    head=head->next;
    printf("\n%d\n",temp->data);
    head->prev=tail;
    tail->next=head;
    free(temp);
    printf("\n%d\n",temp->data);
}

void deleteend(){
    printf("----------------------------Delete at end--------------------------");
    struct node *temp;
    temp=tail;
    tail=tail->prev;
    tail->next=head;
    head->prev=tail;
    printf("\n%d\n",temp->data);
    free(temp);
    printf("\n%d\n",temp->data);
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
    printf("\n");
}

void main(){
    create();
    display();
    deletepos();
    display();
}