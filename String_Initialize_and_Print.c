#include <stdio.h>
int main()
{
    // initilize 1
    /*  char a[5] = {'s', 'h', 'a', 'i', 'k'};
     for (int i = 0; i < 5; i++)
     {
         printf("%c", a[i]);
     } */

    // initilize 2
    // char a[] = "shaik";
    // char a[6] = "shaik";
    // char a[] = "shaik\0";
    char a[6] = "shaik\0";
    printf("%s\n", a);
    printf("%d", sizeof(a));

    return 0;
}