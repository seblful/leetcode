int *productExceptSelf(int *nums, int numsSize, int *returnSize)
{
    int *prefix = (int *)malloc(numsSize * sizeof(int));
    int *suffix = (int *)malloc(numsSize * sizeof(int));
    int *ans = (int *)malloc(numsSize * sizeof(int));
    prefix[0] = 1;
    suffix[numsSize - 1] = 1;

    for (int i = 1; i < numsSize; i++)
    {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }
    for (int i = numsSize - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }

    for (int i = 0; i < numsSize; i++)
    {
        ans[i] = prefix[i] * suffix[i];
    }
    *returnSize = numsSize;
    
    free(prefix);
    free(suffix);
    return ans;
}