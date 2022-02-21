#include<stdio.h>
int main()
{
    int x,p;
    printf("enter the x value: \n");
    scanf("%d",&x);
    printf("enter the p value: \n");
    scanf("%d",&p);
    x=x^(0x1<<p);
    printf("%d",x);
    return 0;
    
}
