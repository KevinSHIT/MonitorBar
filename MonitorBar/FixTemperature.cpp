short FixTemperature(short data)
{
    if (data > 0 && data <= 120)
        return data;
    if (data < 0)
        return data + 100;
    else
    {
        for (; ; )
        {
            return FixTemperature(data - 50);
        }
    }
}