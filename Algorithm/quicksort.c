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

int partition(int lb,int ub){
    int pivot = a[lb];
    int start= lb;
    int end= ub;
    while(start<end){
        while (a[start]<=pivot)
        {
            /* code */start++;
        }

        while (a[end]>pivot)
        {
            /* code */end--;
        }

        if (start<end){
            int temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }
        
        
    }

    int temp1=a[lb];
    a[lb]=a[end];
    a[end]=temp1;
    return end;

    
}

void quicksort(int lb,int ub){
    if (lb<ub){
       int  loc=partition(lb,ub);
        quicksort(lb,loc-1);
        quicksort(loc+1,ub);
    }
}

void main(){
    insert();
    display();
    quicksort(0,5);
    display();
}