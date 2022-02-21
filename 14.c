#include<stdio.h>
#include<string.h>
void reverse(char*);
int main()
{
char str[100];
int len,temp;
char *p=str;
printf("enter a string: \n");
scanf("%[^\n]s",str);
len=strlen(str)-1;
reverse(str);
printf("reversed string is:%s",str);
return 0;
}
void reverse(char *str)
{
    int length,i,temp;
    char *p1=str;
    char *p2=str;
    length=strlen(str);
    for(i=0;i<(length-1);i++)
    p2++;
     for(i=0;i<length/2;i++)
    {
        temp=*p2;
        *p2=*p1;
        *p1=temp;
        p1++;
        p2--;
    }
}

