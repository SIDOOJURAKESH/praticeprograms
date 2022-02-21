#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];
    char *p1=str1;
    char *p2=str2;
    int count=0,i;
    printf("enter the string1: \n");
    scanf("%[^\n]s",str1);
    printf("enter the string2: \n");
    scanf("%s",str2);
    for(i=0;*(str1+i)==*(str2+i);i++)
    {
        if(*(str1+i)==NULL)
        {
        printf("both are equal");
        break;
        }
    }
    if(*(str1+i)!=NULL)
    {
    printf("both are not equal");
    }
    return 0;
}
