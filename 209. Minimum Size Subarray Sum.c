#include <limits.h>

int minSubArrayLen(int target, int *nums, int numsSize)
{
    int minLen = INT_MAX;
    int left = 0;
    int curSum = 0;

    for (int right = 0; right < numsSize; right++)
    {
        curSum += nums[right];

        while (curSum >= target)
        {
            if (right - left + 1 < minLen)
            {
                minLen = right - left + 1;
            }
            curSum -= nums[left];
            left++;
        }
    }

    return minLen != INT_MAX ? minLen : 0;
}
