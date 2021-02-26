long long power(long long x, unsigned short n)
{
  long long result = 1;
  for (unsigned short i = 0; i < n; ++i)
  {
    result *= x;
  }
  return result;
}
