#include<stdio.h>

int stack[5];
int top=-1;

void push(){
    int x;
    printf("Enter data:");
    scanf("%d",&x);

    if (top==4){
        printf("Overflow");
    }

    else{
        top++;
        stack[top]=x;
    }
}

void pop(){
    int item;
    if(top==-1){
        printf("Undefined");

    }

    else{
        item=stack[top];
        top--;
        printf("%d",item);
    }
}

void peek(){
    if(top==-1){
        printf("Undefined");

    }

    else{
        
        printf("%d",stack[top]);
    }
}

void display(){
    int i;
    for(i=top;i>=0;i--){
        printf("%d",stack[i]);
    }
}

void main(){
    int ch;
    
    do {
        printf("Enter Choice: 1:Push,2:Pop,3:Peek,4:Display ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:push();
               break; /* constant-expression */
        case 2:pop();  
               break;
        case 3:peek();  
               break;
        case 4:display();  
               break;              
        
        default: printf("Enter correct value");

            break;
        }
    }
    while (ch!=0);
    
      }
