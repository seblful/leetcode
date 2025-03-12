char *intToRoman(int num)
{
    static char result[16];
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    result[0] = '\0';

    int i = 0;

    while (num > 0)
    {
        while (num >= values[i])
        {
            strcat(result, symbols[i]);
            num -= values[i];
        }
        i++;
    }

    return result;
}