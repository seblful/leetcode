int intComparator(const void *first, const void *second)
{
    int firstInt = *(const int *)first;
    int secondInt = *(const int *)second;
    return firstInt - secondInt;
}

int hIndex(int *citations, int citationsSize)
{
    qsort(citations, citationsSize, sizeof(int), intComparator);

    for (int i = 0; i < citationsSize; i++)
    {
        if (citations[i] >= citationsSize - i)
            return citationsSize - i;
    }
    return 0;
}
