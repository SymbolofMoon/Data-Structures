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

void selectionsort(){
    for (int i = 0; i < N-1; i++)

    {
      int min=i;
      for (int j = i+1; j < N; j++)
      {
          /* code */if (a[j]<a[min]){
              min=j;
          }
      }
      if (min!=i){
          int temp;
          temp=a[i];
          a[i]=a[min];
          a[min]=temp;

      }
    }
    
}

void main(){
    insert();
    display();
    selectionsort();
    display();
}