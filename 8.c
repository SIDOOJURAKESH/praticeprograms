#include<stdio.h>
#define size 5
int main()
{
    int i,arr1[size],arr2[size];
    int *p1=arr1;
    int *p2=arr2;
    printf("enter the elements in an array: \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr1[i]);
        *(arr2+i)=*(arr1+i);
    }
printf("the copied array elements are: \n");
for(i=0;i<size;i++)

printf("%d\n",*(arr2+i));

return 0;
}
