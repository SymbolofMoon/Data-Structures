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
int binarysearch(int data){
    int l=0;
    int r=N-1;
    int mid;
    while(l<r){
        int mid = (l+r)/2;
        
        if (data==a[mid])
        {
            printf("Data found at %d",mid+1);
            return mid;
            break;

        }
        else if (data<a[mid])
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
        
        
        
    }
    
  printf("No data found");
  return -1;
    
    
       
    

   
    

    
}

void sort(){
   for (int i = 0; i < N-1; i++)
   {
       int flag=0;
       for (int i = 0; i < N-1; i++)
       {
           /* code */
       int temp;
       if (a[i]>a[i+1]){
           
           temp=a[i];
           a[i]=a[i+1];
           a[i+1]=temp;
           
       
       }
       }
       
       
     
   }
    
}

void main(){
    insert();
    printf("The values are");
    display();
  //  search(3);
    sort();
    display();
    binarysearch(05);
  

}