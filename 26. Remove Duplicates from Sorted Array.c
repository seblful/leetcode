int removeDuplicates(int *nums, int numsSize)
{
    int n = 1;

    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] != nums[i - 1])
        {
            nums[n] = nums[i];
            n++;
        }
    }
    return n;
}