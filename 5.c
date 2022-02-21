#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    char *p1=str1,*p2=str2;
    int i;
    printf("enter the string1: \n");
    scanf("%[^\n]s",p1);
    for(i=0;*(p1+i)!='\0';i++)
    {
        *(p2+i)=*(p1+i);
    }
    *(p2+i)='\0';
    printf("the copied string is :%s",p2);
    return 0;
}


