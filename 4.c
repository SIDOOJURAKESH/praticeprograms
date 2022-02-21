#include<stdio.h>
#define size 100
int main()
{
    int i,n,item,arr[size];
    int c=0;
    int *p;
    printf("enter the number of elements: \n");
    scanf("%d",&n);
    printf("enter the elements in an array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
printf("entered elements are: \n");
p=&arr[0];
for(i=0;i<n;i++)
printf("%2d",*(p+i));
printf("\n");
printf("enter the element to be search :\n");
scanf("%d",&item);
for(i=0;i<n;i++)
{
    if(item==*(arr+i))
{
    c=i;
    break;
   }
    
}
if(c==i)
{
printf("the element is found at :%d",i);
}
else
{
    printf("element is not found\n");
}

return 0;
    
}
