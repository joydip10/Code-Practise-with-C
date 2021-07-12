#include <stdio.h>

void back_print(void)
{
    char s;
    if((s =getchar()) != '\n')
    {
        back_print();
        putchar(s);
    }
}

int main()
{
    printf("TYPE A LINE OF TEXT :");

    back_print();

    return 0;
}
