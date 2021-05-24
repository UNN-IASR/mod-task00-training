long long power(long long x, unsigned short n)
{
  long long pow = 1;
  
  for ( int i = 0 ; i < n ; i ++)
  pow *= x;

  return pow; 
}
