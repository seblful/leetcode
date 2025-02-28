int majorityElement(int *nums, int numsSize)
{
    int count = 0;
    int n;

    for (int i = 0; i < numsSize; i++)
    {
        if (count == 0)
        {
            n = nums[i];
        }

        count += (nums[i] == n) ? 1 : -1;
    }

    return n;
}