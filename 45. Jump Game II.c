int jump(int *nums, int numsSize)
{
    if (numsSize == 1)
    {
        return 0;
    }

    int cnt = 0;
    int bound = 0;
    int next = 0;

    for (int i = 0; i < numsSize; i++)
    {
        next = fmax(next, nums[i] + i);
        if (i == bound)
        {
            cnt++;
            bound = next;

            if (bound >= numsSize - 1)
            {
                break;
            }
        }
    }
    return cnt;
}