/* Rakibul Hasan Emon
   ID:1915002532
   Batch:50th
*/

#include <stdio.h>
void quicksort(int a[],int p,int r);
int  quick(int a[],int p,int r);
int main()
{
    int a[100],size;
    printf("Enter the array size : ");
    scanf("%d",&size);
    printf("\nEnter the array elements : ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nThe main array : ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");
    quicksort(a,0,size-1);
     printf("After quick sort : ");
     for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");
    return 0;
}

void quicksort(int a[],int p,int r)
{
    if(p<r)
    {
    int q = quick(a,p,r);
    quicksort(a,p,q-1);
    quicksort(a,q+1,r);
    }

}
// when use swap function
/*
void swap(int *a ,int *b)
            {
                int temp =*a;
                *a = *b;
                *b = temp;
            }*/


// pivot is lest element
int  quick(int a[],int p,int r)
{
    int i,j,x,temp,temp1;
    x=a[r];
    i=p-1;
    for (j=p;j<=r-1;j++)
    {
        if(a[j]<=x)
        {
             i=i+1;
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
            // swap(&a[i],&a[j]);//for swap function
        }
    }
    temp1=a[i+1];
    a[i+1]=a[r];
    a[r]=temp1;
    //swap(&a[i+1],&a[r]) ;//for swap function
    return i+1;
}

/*
// pivot is first element
int  quick(int a[],int p,int r)
{
    int i,j,x,temp,temp1;
    x=a[p];
    i=p+1;
    for (j=p+1;j<=r;j++)
    {
        if(a[j]<x)
        {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
             //swap(&a[i],&a[j]);//for swap function
             i=i+1;
        }
    }
    temp1=a[p];
    a[p]=a[i-1];
    a[i-1]=temp1;
   // swap(&a[p],&a[i-1]) ;//for swap function
    return i-1;
}
*/
