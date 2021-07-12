#include <stdio.h>
int main()
{
    char ch;
    int t;
    printf("ENTER A TEST CASE: ");
    scanf("%d",&t);
    while(t--){
    printf("ENTER A CHARACTER: ");
    scanf("\n%c",&ch);
    if(ch>=97 && ch<=122) printf("POSITION OF THE CHARACTER IS: %d\n",(ch-97)+1);
    if(ch>=65 && ch<=90)  printf("POSITION OF THE CHARACTER IS: %d\n",(ch-65)+1);
    }
    return 0;
}
