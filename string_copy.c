#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", a, b);

    for (int i = 0; i <= strlen(b); i++)
    {
        a[i] = b[i];
    }

    // strcpy(a,b);
    // strcpy(b, a);


    /* int len = strlen(a) + strlen(b);
    for (int i = 0; i <= len; i++)
    {
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    } */

    printf("%s %s", a, b);

    return 0;
}