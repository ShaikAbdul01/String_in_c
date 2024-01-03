#include <stdio.h>
int main()
{
    char s[1000003];
    fgets(s, 1000003, stdin);
    for (int i = 0; s[i] != '\\'; i++)
    {
        printf("%c", s[i]);
    }
    return 0;
}