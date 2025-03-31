int maxArea(int *height, int heightSize)
{
    int left = 0;
    int right = heightSize - 1;
    int amount;
    int maxAmount = 0;

    while (left < right)
    {
        if (height[left] > height[right])
        {
            amount = height[right] * (right - left);
            right--;
        }
        else
        {
            amount = height[left] * (right - left);
            left++;
        }

        if (amount > maxAmount)
        {
            maxAmount = amount;
        }
    }

    return maxAmount;
}