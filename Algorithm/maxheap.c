#include<stdio.h>
#include<math.h>
#define N 5

int front =0;
int a[N];

void insert(){
    
      
      for (int i = 0; i < N; i++)
      {
          /* code */
          printf("Enter data ");
          scanf("%d", &a[i]);
        
      }
      
}

void display(){
    for (int i = 0; i < N; i++)
    {
        printf("  %d",a[i]);
        
    }
    printf("\n");
    
}

void insertHeap(int n, int value){
    
    a[n]=value;
   int i=n;
    while (i>1)
    {
        int parent=i/2;
        if (a[parent]<a[i]){
            int temp=a[parent];
            a[parent]=a[i];
            a[i]=temp;
            i=parent;
        }
        else
        {
            return;
        }
        
        /* code */
    }
    
}

void main(){
    insert();
    display();
    insertHeap(6,35);
    display();
}