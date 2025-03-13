#include <stdbool.h>

char *longestCommonPrefix(char **strs, int strsSize)
{
    if (strsSize == 0)
        return "";

    // int min_len = INT_MAX;
    // for (int i = 0; i < strsSize; i++) {
    //     if (strlen(strs[i]) < min_len) {
    //         min_len = strlen(strs[i]);
    //     }
    // }

    int min_len = strlen(strs[0]);

    for (int len = min_len; len > 0; len--)
    {
        bool flag = true;
        for (int i = 0; i < strsSize - 1; i++)
        {
            if (strncmp(strs[i], strs[i + 1], len) != 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            char *result = malloc(len + 1);
            strncpy(result, strs[0], len);
            result[len] = '\0';
            return result;
        }
    }

    char *result = malloc(1);
    result[0] = '\0';
    return result;
}