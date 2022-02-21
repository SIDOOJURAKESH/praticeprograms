#include<stdio.h>
#define size 100
int maximum(int arr[],int index,int n);
int minimum(int arr[],int index,int n);

int main()
{
    int arr[size],i,min,max,n;
    printf("enter the size of an array: \n");
    scanf("%d",&n);
    printf("enter the elements : \n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    max=maximum(arr,0,n);
    min=minimum(arr,0,n);
    printf("maximum element in array=%d\n",max);
    
    printf("minimum element in array:%d\n",min);
    return 0;
}
int maximum(int arr[],int index,int n)
{
    int max;
   if(index>=n-2)
    {
        if(arr[index]>arr[index+1])
        return arr[index];
        else
        return arr[index+1];
    }
    max=maximum(arr,index+1,n);
    if(arr[index]>max)
    return arr[index];
    else
    return max;
}
int minimum(int arr[],int index,int n)
{
    int min;
    if(index<=n-2)
    {
        if(arr[index]<arr[index+1])
        return arr[index];
        else
        return arr[index+1];
    }
    min=minimum(arr,index+1,n);
    if(arr[index]<min)
    return arr[index];
    else
    return min;
}
