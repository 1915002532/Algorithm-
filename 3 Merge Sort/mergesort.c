/* Rakibul Hasan Emon
   ID:1915002532
   Batch:50th
*/
#include <stdio.h>
void mergeSort(int a[],int s,int e);
void merge(int a[],int s,int m,int e);
int main()
{
    int a[100],size;
    printf("Enter the array size : ");
    scanf("%d",&size);
    printf("\nEnter the array elements : ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nThe main array : ");
    for(int i=0; i<size; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");
    mergeSort( a,0,size-1);
    printf("After merge sort : ");
    for(int i=0; i<size; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");
    return 0;
}

void mergeSort(int a[],int s,int e)
{
    if(s<e)
    {
        int m = (s+e)/2;
        mergeSort(a,s,m);
        mergeSort(a,m+1,e);
        merge(a,s,m,e);
    }
}

void merge(int a[],int s,int m,int e)
{
    int i,j,k,n1,n2;
    n1 = m-s+1;
    n2 = e - m;
    int L[n1];
    int R[n2];
    for (i=1; i<=n1; i++)
    {
        L[i]=a[s+i-1];
    }
    for (j=1; j<=n2; j++)
    {
        R[j]=a[m+j];
    }
    L[n1+1]=1000;
    R[n2+1]=1000;
    i=1;
    j=1;
    for (k=s; k<=e; k++)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i=i+1;
        }
        else
        {
            a[k]=R[j];
            j=j+1;
        }
    }
}
