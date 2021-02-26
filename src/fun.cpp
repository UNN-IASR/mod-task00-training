long long power(long long x, unsigned short n)
{
  long long val = 1;
  for (int i = 0; i < n; i++)
    val = val * x;
  return val;
}
