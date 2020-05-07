#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};


struct node *head;

void create(){
    int choice=1;
    struct node *newnode,*temp;
    head=0;
    while(choice){
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter Data");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if (head==0){
            head = temp= newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        temp->next=head;
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
            printf("%d",temp->data);
            temp=temp->next;
        }
        printf("%d ",temp->data);
    }
    printf("\n");
}
void deletebegin(){
    struct node *temp,*temp1;
    temp=head;
        while(temp->next!=head){
            
            temp=temp->next;
        }
    temp1=head;
    head=head->next;
    temp->next=head;
    free (temp1);
}
void deleteend(){
    printf("------------------------------------Delete at the endpoint---------------------------------");
    struct node *temp;
    temp=head;
        while(temp->next->next!=head){
            
            temp=temp->next;
        }
    
    printf("\n%d",temp->next->data);
    free(temp->next);    
    printf("\n%d",temp->next->data);
    printf("\n");
    temp->next=head;

   // printf("%d",temp->next->data);


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
    free(temp1);
}
void main(){
    create();
    display();
    deletepos();
    display();
    
}