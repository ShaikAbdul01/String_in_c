#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    
    /* int k = strlen(a);
    for (int i = 0; b[i] != '\0'; i++, k++)
    {
        a[k] = b[i];
    } */

    strcat(a, b);
    printf("%s", a);
    return 0;
}