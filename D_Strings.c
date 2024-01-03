#include <stdio.h>
#include<string.h>
int main()
{
    char a[11], b[11];
    scanf("%s %s", a, b);

    printf("%d %d\n",strlen(a),strlen(b));
    printf("%s%s\n", a, b);
    for (int i = 0; i < 11; i++)
    {
        char temp = b[0];
        b[0] = a[0];
        a[0] = temp;
    }
    printf("%s %s\n", a, b);
    return 0;
}