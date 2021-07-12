#include <stdio.h>
#include <string.h>
int count(char a[],char b)
{
    int i,count=0;
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]==b) count++;
    }
    return count;
}
int main()
{
  char str[100];
  gets(str);
  char b;
  scanf("%c",&b);
  printf("%d",count(str,b));
  return 0;
}
