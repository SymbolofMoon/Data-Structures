
#include<stdio.h>
#include<stdlib.h>



struct node 
{
    int data;
    struct node *left;
    struct node * right;

};

struct node *create(){
    int x;
    struct node *newnode;
    newnode=(struct node *) malloc(sizeof(struct node));
    printf("Enter data (-1) for no node");
    scanf("%d",&x);
    if(x==-1){
        return 0;
    }
    newnode->data=x;
    printf("Enter Left Child of %d\n",x);
    newnode->left=create();
    printf("Enter Right Child of %d\n",x);
    newnode->right=create();
    return newnode;
}

void Preorder(struct node *root){
    if (root==0){
        return ;
    }

    printf("%d ",root->data);
    Preorder(root->left);
    Preorder(root->right);
}
void Inorder(struct node *root){
    if (root==0){
        return ;
    }

    
    Inorder(root->left);
    printf("%d ",root->data);
    Inorder(root->right);
}
void Postorder(struct node *root){
    if (root==0){
        return ;
    }

    
    Postorder(root->left);
    
    Postorder(root->right);
    printf("%d ",root->data);
}
void main(){
    struct node *root,*root1;
    root = 0;
   root1 =root=create();
    
    printf("Pre Order is:");
    Preorder(root1);
    Inorder(root1);
    Postorder(root1);
}