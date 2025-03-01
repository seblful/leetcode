int maxProfit(int *prices, int pricesSize)
{
    int sell = 0;
    int minPrice = prices[0];
    int profit;

    for (int i = 0; i < pricesSize; i++)
    {
        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }
        profit = prices[i] - minPrice;
        if (profit > sell)
        {
            sell = profit;
        }
    }
    return sell;
}