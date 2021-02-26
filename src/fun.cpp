long long power(long long x, unsigned short n) {
	long long tmp = 1;
	for (int i = 0; i < n; i++) {
		tmp *= x;
	}
	return tmp;
}
