void reverse(int *nums, int i, int j)
{
    int temp;

    int li = i;
    int ri = j;

    while (li < ri)
    {
        temp = nums[li];
        nums[li] = nums[ri];
        nums[ri] = temp;

        li++;
        ri--;
    }
}

void rotate(int *nums, int numsSize, int k)
{
    int n, temp;
    k = k % numsSize;

    reverse(nums, 0, numsSize - k - 1);
    reverse(nums, numsSize - k, numsSize - 1);
    reverse(nums, 0, numsSize - 1);
}