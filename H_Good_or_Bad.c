#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    // getchar();
    char s[100005];
    while (t--)
    {
        //"010" or "101"
        scanf("%s", s);
        int count = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            if ((s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0') || (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1'))
            {
                // printf("Good\n");
                count = 1;
            }
        }
        if (count > 0)
        {
            printf("Good\n");
        }
        else
        {
            printf("Bad\n");
        }
    }
    return 0;
}