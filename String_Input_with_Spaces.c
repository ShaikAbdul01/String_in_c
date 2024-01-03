#include <stdio.h>
int main()
{
    char a[20];
    // gets(a); //not standard
    fgets(a, 15, stdin);
    printf("%s", a);
    return 0;
}