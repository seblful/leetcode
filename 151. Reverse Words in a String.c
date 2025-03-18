char *reverseWords(char *s)
{
    int sSize = strlen(s);
    char *answer = malloc(sSize + 1);
    answer[0] = '\0';

    int end = sSize - 1;
    int a_i = 0;

    for (int i = sSize - 1; i >= 0; i--)
    {
        // 
        if (s[i] == ' ')
        {
            if (end > i)
            {
                for (int j = i + 1; j <= end; j++)
                {
                    answer[a_i++] = s[j];
                }
                answer[a_i++] = ' ';
                end = i - 1;
            }
            else
            {
                end = i - 1;
            }
        }
        else if (i == 0)
        {
            for (int j = i; j <= end; j++)
            {
                answer[a_i++] = s[j];
            }
            answer[a_i++] = ' ';
            end = -1;
        }
    }

    // Remove the trailing space if any
    if (a_i > 0)
    {
        answer[a_i - 1] = '\0';
    }
    else
    {
        answer[0] = '\0';
    }

    return answer;
}