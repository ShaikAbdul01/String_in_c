#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001], t[1001];
    scanf("%s %s", s, t);
    /* int i = 0, countS = 0, countT = 0;
       while (s[i] != 0)
      {
          countS++;
          i++;
      }
      int j = 0;
      while (t[j] != 0)
      {
          countT++;
          j++;
      }

     printf("%d %d\n", countS, countT);
      */

    printf("%d %d\n", strlen(s), strlen(t));
    printf("%s %s\n", s, t);
    return 0;
}