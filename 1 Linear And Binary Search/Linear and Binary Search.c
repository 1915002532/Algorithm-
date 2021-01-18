#include <stdio.h>

void sorted_elements(int array[], int size);
void linear_search(int array[], int size, int search_key);
binary_search(array,size,search_key);

int main()
{
    int array[100],search_key,size,i,choice;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    printf("\nEnter the elements of the array : ");
    for (i=0; i<size; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\nThe main array : ");
    for (i=0; i<size; i++)
    {
        printf("%d ",array[i]);
    }
    sorted_elements(array, size);
    printf("\nEnter the search key :");
    scanf("%d",&search_key);
    printf("\n1.Liner search\n");
    printf("2.Binary search\n");
    printf("\nEnter your choice 1 or 2 : ");
    scanf("%d",&choice);
    if(choice==1)
    {
        linear_search(array,size,search_key);
    }
    else
     {
         binary_search(array,size,search_key);
     }
    return 0;
}

void sorted_elements(int array[], int size)
{
    int i,j,temp;
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(array[i]>array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    printf("\n\nSorted elements are : ");
    for(i=0; i<size; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}

void linear_search(int array[], int size, int search_key)
{
    int i,count=0;
    for(i=0; i<size; i++)
    {
        if(array[i]==search_key)
        {
            count++;
        }
    }
    if(count>0)
    {
        printf("\nFound\n");
    }
    else
    {
        printf("\nNot Found\n");
    }
}

binary_search(int array[],int size,int search_key)
{
    int start=0, end =size-1 , middle;
    start=0;
    end =size-1 ;
     while(start<=end)
        {
            middle=(start+end)/2;

            if(search_key==array[middle])
            {
                printf("\nFound\n");
                break;
            }
            else if(search_key>array[middle])
            {
                start=middle+1;
            }
            else
            {
                end=middle-1;
            }
        }
    if(start>end)
    {
        printf("\nNot Found\n");
    }
}
