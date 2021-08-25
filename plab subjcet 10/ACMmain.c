#include <stdio.h>

int main()
{
	int t;
	for (scanf("%d", &t); t; --t) {
		int m, n;
		scanf("%d%d", &m, &n);
		int k = n;
		while (m) {
			k = (n - 1) / m + 1;
			m = m * k - n;
			n = k * n;
		}
		printf("%d",k);
	}
}