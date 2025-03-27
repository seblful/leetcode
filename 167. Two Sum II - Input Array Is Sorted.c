#include <stdio.h>

int *twoSum(int *numbers, int numbersSize, int target, int *returnSize)
{
    int l = 0;
    int r = numbersSize - 1;
    int total;

    *returnSize = 2;
    int *result = (int *)malloc(2 * sizeof(int));

    while (l < r)
    {
        total = numbers[l] + numbers[r];

        if (total == target)
        {
            result[0] = l + 1;
            result[1] = r + 1;
            return result;
        }
        else if (total > target)
        {
            r--;
        }
        else
        {
            l++;
        }
    }

    free(result);
    *returnSize = 0;
    return NULL;
}