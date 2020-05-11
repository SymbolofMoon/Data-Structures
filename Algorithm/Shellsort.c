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

void swap(int x,int y){
    int temp1=x;
    x=y;
    y=temp1;

}


int shellsort(){
    for (int gap = 4; gap >=1; gap/2)
    {
        for (int j = gap; j < 9; j++)
        {
            for (int i = j - gap; i <=gap; i++)
            {
                if (a[i+gap]>a[i])
                {
                    //printf("%d",a[i]);
                   // break;
                  return a[i];
                  
                }
                else
                {
                    printf("Bye");
                    int temp;
                    temp=a[i];
                    a[i]=a[i+gap];
                    a[i+gap]=temp;
                }
                
                
            }
            
        }
        
    }
    return a[9];
    
}



void main(){
    insert();
    display();
    shellsort();
    display();
}