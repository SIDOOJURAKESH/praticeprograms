

#include <stdio.h>

int main()
{
int i,j,n,x;
const int *ptr=&n;
printf("enter the number of lines: \n");
scanf("%d",&n);
for(i=*ptr;i>=1;i--)
{
for(x=1;x<=*ptr-i;x++)
{
printf("-");
}
for(j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
}
return 0;
}
    


