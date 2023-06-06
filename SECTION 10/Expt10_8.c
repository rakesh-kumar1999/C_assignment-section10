/*Write a function using pointers that compares two integer arrays to see whether they 
are identical. The function returns 1 if they are identical, 0 otherwise.*/
#include"stdio.h"
#define max 50
void Add_element(int * Arr,int size)
{
    printf("Enter %d elements of array:\n",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",(Arr+i));
    }
}
void display(int *Arr,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d,",*(Arr+i));
    }
}
int Compare_Array(int * Arr1,int size1,int * Arr2,int size2 )
{
    int iscompare=0;
    if(size1!=size2)
        return 0;
    else
    {   
        for(int i=0;i<size1;i++)
        {
           if(*(Arr1+i)!=*(Arr2+i))
           {
           iscompare=1;
           break;
           }
        }
    }
    if(iscompare==1)
    return 0;
    else
    return 1;
}
void main()
{
    int Arr1[max],Arr2[max],size1,size2,result;
    printf("\nEnter the size of Array 1:");
    scanf("%d",&size1);
    Add_element(Arr1,size1);
    printf("\nEnter the size of Array 2 :");
    scanf("%d",&size2);
    Add_element(Arr2,size2);
    result=Compare_Array(Arr1,size1,Arr2,size2);
    result==1?printf("They are identical"):printf("They are not identical");
}