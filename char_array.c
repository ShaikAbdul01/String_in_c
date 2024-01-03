#include <stdio.h>
int main()
{
    char ch[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &ch[i]);
        printf("%c\n", ch[i]);
    }
    return 0;
}