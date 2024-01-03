#include <stdio.h>
int main()
{
    char s[1000002];
    scanf("%s", s);
    int sum = 0;

    for (int i = 0; s[i] != 0; i++)
    {
        int value = s[i] - 48;
        sum += value;
    }
    printf("%d\n", sum);
    return 0;
}