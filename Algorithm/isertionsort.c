#include<stdio.h>
#include<math.h>
#define N 9

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

void insertsort(){
    for (int i = 1; i < N; i++)
    {
        int temp=a[i];
        int j=i-1;
        while (j>=0 && a[j]>temp)
        {
            /* code */
            a[j+1]=a[j];
            j--;

        }
        a[j+1]=temp;
        
    }
    


}


void main(){
    insert();
    display();
    insertsort();
    display();
}