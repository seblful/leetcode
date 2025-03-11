int trap(int *height, int heightSize)
{
    int left = 0;
    int right = heightSize - 1;
    int leftMax = height[left];
    int rightMax = height[right];
    int water = 0;

    while (left < right)
    {
        if (leftMax < rightMax)
        {
            left++;
            leftMax = fmax(leftMax, height[left]);
            water += leftMax - height[left];
        }
        else
        {
            right--;
            rightMax = fmax(rightMax, height[right]);
            water += rightMax - height[right];
        }
    }

    return water;
}