#include <stdbool.h>

bool canJump(int *nums, int numsSize)
{
    if (numsSize == 1)
    {
        return true;
    }

    int numSteps = nums[0];

    for (int i = 1; i < numsSize - 1; i++)
    {
        numSteps -= 1;

        if (numSteps < 0)
        {
            return false;
        }

        if (nums[i] > numSteps)
        {
            numSteps = nums[i];
        }
    }

    return numSteps > 0;
}