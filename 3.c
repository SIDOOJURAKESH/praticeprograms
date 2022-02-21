#include<stdio.h>
#include<string.h>
char capital(char *str)
{
int i=0;
char let;
 for (i=0;*(str+i)!='\0';i++)
{
if(*(str+i)>='A' && *(str+i)<='Z')
{
return *(str+i);
return (let+capital(let-1));
}
}
}
int main()
{
    char str[100],let;
    printf("enter a string: ");
    scanf("%s",str);
    let=capital(str);
    if(let==0)
    {
        printf("there is no capital letter");
    }
else
{
    printf("the first capital letter in %s is %c\n",str,let);
}
    return 0;

}

