#include<stdio.h>
#define size 100
int sum(int arr[],int start,int len);
int main()
{
    int arr[size];
    int n,i,sumofarray;
    printf("enter the size of an array: \n");
    scanf("%d",&n);
    printf("enter the elements in an array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    } 
    sumofarray =sum(arr,0,n);
    printf("the sum of array is:%d",sumofarray);
    return 0;
}
int sum(int arr[],int start,int len)
{
if(start>=len)
return 0;
return (arr[start]+sum(arr,start+1,len));
}


