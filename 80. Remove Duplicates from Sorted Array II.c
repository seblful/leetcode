int removeDuplicates(int *nums, int numsSize)
{
    if (numsSize <= 2)
        return numsSize;

    int n = 2;

    for (int i = 2; i < numsSize; i++)
    {
        if (nums[i] != nums[n - 2])
        {
            nums[n] = nums[i];
            n++;
        }
    }
    return n;
}