int romanToInt(char *s)
{
    int romanMap[256] = {0}; // ASCII array to map Roman characters to values
    romanMap['I'] = 1;
    romanMap['V'] = 5;
    romanMap['X'] = 10;
    romanMap['L'] = 50;
    romanMap['C'] = 100;
    romanMap['D'] = 500;
    romanMap['M'] = 1000;

    int result = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        // If the current value is smaller than the next value, subtract it
        if (s[i + 1] != '\0' && romanMap[s[i]] < romanMap[s[i + 1]])
        {
            result -= romanMap[s[i]];
        }
        else
        {
            result += romanMap[s[i]];
        }
    }
    return result;
}