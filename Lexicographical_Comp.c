#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    /*  int i = 0;
     while (1)
     {
         if (a[i] == '\0' && b[i] == '\0')
         {
             printf("Same\n");
             break;
         }
         else if (a[i] == '\0')
         {
             printf("A is Smaller");
             break;
         }
         else if (b[i] == '\0')
         {
             printf("B is smaller");
             break;
         }
         if (a[i] == b[i])
         {
             i++;
         }
         else if (a[i] > b[i])
         {
             printf("B is smaller");
             break;
         }
         else if (b[i] > a[i])
         {
             printf("A is smaller");
             break;
         }
     } */

    int value = strcmp(a, b);
    // printf("%d", value);
    /*
    0=same;
    0 less than = small;
    0 greater than = bigger
     */

    if (value < 0)
    {
        printf("A is smaller");
    }
    else if (value > 0)
    {
        printf("B is smaller");
    }
    else
    {
        printf("Same");
    }
    return 0;
}