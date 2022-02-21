#include <stdio.h>
#include <string.h>
void strcount(char *str);
int main()
{
char str[100];  
printf("enter the string: ");
scanf("%[^\n]s",str);
strcount(str);
}
void strcount(char *str)
{
int i,alphabets=0,digits=0,specialcharacters=0;
        
        for(i=0;str[i];i++)  
     {
        if((str[i]>=65 && str[i]<=90)|| (str[i]>=97 && str[i]<=122) )
          alphabets++;
        else if(str[i]>=48 && str[i]<=57)
         digits++;
        else
         specialcharacters++;
 }
    printf("alphabets = %d\n",alphabets);
    printf("Digits = %d\n",digits);
    printf("Special characters = %d", specialcharacters);
}
