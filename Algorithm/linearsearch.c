#include<stdio.h>
#include<math.h>

int front =0;
int a[5];

void insert(){
    
      
      for (int i = 0; i < 5; i++)
      {
          /* code */
          printf("Enter data ");
          scanf("%d", &a[i]);
        
      }
      
}

void display(){
    for (int i = 0; i < 5; i++)
    {
        printf("  %d",a[i]);
        
    }
    printf("\n");
    
}
void search(int x){
    int i = 0;
    for (i=0; i < 5; i++)
    {
       if (a[i]==x){
           
           printf("Element is at %d",i+1);
           break;
       }
       
       
       
    }

    if (a[i]!=x){
        printf("Not found");
    }
   
    printf("\n");
}

void sort(){
   for (int i = 0; i < 4; i++)
   {
       for (int i = 0; i < 4; i++)
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
    search(3);
    sort();
    display();
   int a= 9/2;
   printf("%d",a);

}