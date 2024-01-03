#include <stdio.h>
#include <string.h>
int main()
{
    char ch[1001];
    scanf("%s", ch);
    int flag = 1;
    for (int i = 0; i < strlen(ch); i++)
    {

        if (ch[i] != ch[strlen(ch) - i - 1])
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}


/* 
#include <stdio.h>
#include <string.h>
int main()
{
    char ch[1001];
    scanf("%s", ch);
    int flag = 1;
    int i = 0, j = strlen(ch) - 1;
    while (i < j)
    {
        int temp = ch[i];
        ch[i] = ch[j];
        ch[j] = temp;
        i++;
        j--;
        if (ch[i] != ch[j])
        {
            flag = 0;
        }
    }

    if (flag)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
 */