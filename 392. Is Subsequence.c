#include <stdbool.h>

bool isSubsequence(char *s, char *t)
{
    int n = strlen(s);
    int m = strlen(t);

    int i = 0;

    for (int j = 0; j < m; j++)
    {
        if (s[i] == t[j])
        {
            i++;
        }
    }

    return i == n;
}