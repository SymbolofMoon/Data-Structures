#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *top=0;

void push(int x){
    struct node *newnode;
    newnode=(struct node *) malloc(sizeof(struct node));
    newnode->data=x;
    newnode->link=top;
    top=newnode;
}

void display(){
    struct node *temp;
    temp=top;
    if(top==0){
        printf("Enter data please");
    }
    else {
        while (temp!=0)
        {
            printf("%d ",temp->data);
            temp=temp->link;
        }
        
    }
}

void peek(){
    printf("Top element is %d",top->data);
}

void pop(){
    struct node *temp;
    printf("top element is %d",top->data);
    temp=top;
    top=top->link;
    free(temp);
}

void main(){
    push(2);
    push(3);
    push(5);
    push(7);
    push(9);
    display();
    pop();
    peek();

}