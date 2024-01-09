#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    // getchar();
    char s[51], t[51];
    while (n--)
    {
        scanf("%s %s", s, t);
        int a = strlen(s), b = strlen(t);

        int mx = (a > b) ? a : b;

        for (int i = 0; i < mx; i++)
        {
            if (i < a)
            {
                printf("%c", s[i]);
            }
            if (i < b)
            {
                printf("%c", t[i]);
            }
        }
        printf("\n");
    }

    return 0;
}