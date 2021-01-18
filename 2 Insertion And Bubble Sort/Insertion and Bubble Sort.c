#include <stdio.h>

void insertion_sort(int array[], int n);
void bubble_sort(int array[],int n);

int main()
{
    int arr[100],size,choice,i;

    printf("Enter Size of Array: ");
    scanf("%d",&size);

    printf("\nEnter the array elements : \n");
    for( i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nThe main array : ");
    for (i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("\n1 for Insertion Sort\n");
    printf("2 for Bubble Sort\n");
    printf("\nEnter your choice 1 or 2 : ");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("\nInsertion Sort : ");
        insertion_sort(arr,size);
        printf("\n");
    }
    else
     {
        printf("\nBubble Sort : ");
        bubble_sort(arr,size);
        printf("\n");
     }
}


void insertion_sort(int array[],int n)
{
    int i,j,key;
    for (i=1;i<n;i++)
    {
        key=array[i];
        for (j=i-1;j>=0 && array[j]>key;j--)
        {
            array[j+1]=array[j];
        }
        array[j+1]=key;
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",array[i]);
    }
}
/*
void insertion_sort(int array[], int n)
{
    int i,j,key;

    for (i=1; i<n ; i++)
        {
            key=array[i];
            j=i-1;
            while(j>=0 && array[j]>key)
                {
                    array[j+1]=array[j];
                    j=j-1;
                }
           array[j+1]=key;
        }

    for(i=0; i<n; i++)
    {
        printf("%d ",array[i]);
    }
}*/


void bubble_sort(int array[],int n)
{
    int i,j,temp;

    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-1-i;j++)
        {
            if(array[j]>array[j+1])

                {
                    temp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;
                }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",array[i]);
    }
}
