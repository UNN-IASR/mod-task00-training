#include "../include/fun.h"

long long power(long long x, unsigned short n)
{
	long long res = x;
	for (int i = 1; i < n; ++i) {
		res *= x;
	}
	return res;
}
