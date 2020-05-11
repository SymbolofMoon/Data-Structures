#include<stdio.h>
#include<math.h>
#define N 6

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

void swap(int x,int y){
    int temp1=x;
    x=y;
    y=temp1;

}


void maxHeapify(int i){
int largest=i;
int l=(2*(i));
int r=(2*(i))+1;
while (l<=N && a[l-1]>a[largest-1])
{
    /* code */largest=l;
}
while (r<=N && a[r-1]>a[largest-1])
{
    /* code */largest=r;
}

if (largest!=i){
    swap(a[largest],a[i]);
    maxHeapify(largest);
}

display();

}  

void heapify(){
    for (int i = N/2; i >= 0; i--)
    {
        maxHeapify(i);
        /* code */
    }
    display();
}
   
    




void main(){
    insert();
    display();
    heapify();
    display();
}