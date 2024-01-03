#include <stdio.h>
#include <string.h>
int main()
{
    char ch[100005];
    scanf("%s", ch);
    for (int i = 0; i < strlen(ch); i++)
    {
        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            printf("%c", ch[i] - 32);
        }
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            printf("%c", ch[i] + 32);
        }
        if (ch[i] == ',')
        {
            ch[i] = ' ';
            printf("%c", ch[i]);
        }
    }
    return 0;
}