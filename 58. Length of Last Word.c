int lengthOfLastWord(char *s)
{
    int p = 0;
    int l = 0;
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] != ' ')
        {
            l += 1;
        }
        else
        {
            p = l == 0 ? p : l;
            l = 0;
        }

        i++;
    }

    return l == 0 ? p : l;
}