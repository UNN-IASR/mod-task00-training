long long power(long long x, unsigned short n)
{
    long long temp = 1;
    for(int i = 0; i < n; i++)
    {
        temp *= x;
    }
    
    return temp;
}