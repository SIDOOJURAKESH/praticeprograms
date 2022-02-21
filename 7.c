#include<stdio.h>
#define size sizeof(int) * 8
int main()
{
    int num,count,mask,i;
    printf("enter the number:  \n");
    scanf("%d",&num);
mask=1<<(size-1);
count=0;
for(i=0;i<size;i++)
{
    if((num<<i) & mask)
{
    break;
}
count++;
}
printf("the total no of leading zeros are:%d and %d",num,count);
return 0;
}

