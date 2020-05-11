#include<stdio.h>
#include<math.h>
#define N 7

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

void merge(int lb,int mid,int ub)
{
    int i=lb;
     mid=(lb+ub)/2;
    int j=mid+1;
    
    int b[N];
    int k=lb;
    while (i<=mid&&j<=ub)
    {
         printf("%d---------------",i);
        if (a[i]<=a[j]){
            b[k]=a[i];
            i++;
            k++;
        }
        else
        {
           
            b[k]=a[j];
            j++;
            k++;
        }
        
    }

    if(i>mid){
        while (j<=ub)
        {
            
            b[k]=a[j];
            j++;
            k++;
        }
        
    }
    else{
        while (i<=mid)
        {
            
            b[k]=a[i];
            i++;
            k++;
        }
    }

    for (int k = lb; k < ub; k++)
    {
        /* code */a[k]=b[k];
    }
    
    
}
void mergesort(int lb,int ub){
    if (lb<ub){
       int  mid=(lb+ub)/2;

        mergesort(lb,mid);
        mergesort(mid+1,ub);
        merge(lb,mid,ub);
    }
}

void main(){
    insert();
    display();
    mergesort(0,6);
    display();
}