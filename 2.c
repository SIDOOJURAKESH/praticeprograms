#include<stdio.h>
#define size 100
int main()
{
    int i,j,temp,n,x=0,arr[size];
    printf("enter the number: \n");
    scanf("%d",&n);
    x=n;
    printf("enter the elements in an array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
printf("the entered elements: \n");
for(i=0;i<n;i++)
printf("%2d",arr[i]);
printf("\n");
printf("after movie all zeros to end of an array: ");
for(i=0;i<n-1;i++)
{

    for(j=0;j<n-1-i;j++)
    {
        if(arr[j]<arr[j+1])
        {
            int temp=0;
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        }
    }
    
}
for(i=0;i<n;i++)
{
    printf("%d",arr[i]);
}
return 0;

}
