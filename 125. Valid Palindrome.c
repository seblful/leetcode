int isPalindrome(char str[])
{
    int left = 0, right = strlen(str) - 1;

    while (left < right)
    {

        while (left < right && !isalnum(str[left]))
        {
            left++;
        }

        while (left < right && !isalnum(str[right]))
        {
            right--;
        }

        if (tolower(str[left]) != tolower(str[right]))
        {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}