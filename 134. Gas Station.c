int canCompleteCircuit(int *gas, int gasSize, int *cost, int costSize)
{
    int current = 0;
    int total = 0;
    int diff = 0;
    int start = 0;

    for (int i = 0; i < gasSize; i++)
    {
        diff = gas[i] - cost[i];

        total += diff;
        current += diff;
        if (current < 0)
        {
            start = i + 1;
            current = 0;
        }
    }

    if (total >= 0)
    {
        return start;
    }

    return -1;
}
