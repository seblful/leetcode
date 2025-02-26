int removeElement(int *nums, int numsSize, int val)
{
    int n = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != val)
        {
            nums[n] = nums[i];
            n++;
        }
    }

    return n;
}