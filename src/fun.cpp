long long power(long long x, short int n)
{
    int i = 0;
    long long result = 1;
    
    do
    {
        result *= x;
        i++;
    }while(i < n);
    
    return result;
}
