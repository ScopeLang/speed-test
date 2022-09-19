#include <stdbool.h>
#include <stdio.h>

bool isPrime(int n) {
	int i = 2;
	while (i < n) {
		if (n % i == 0) {
			return false;
		}
		i++;
	}
	return true;
}

int main() {
	int n = 0;
	int p = 0;
	while (p <= 10000) {
		n++;
		if (isPrime(n)) {
			p++;
		}
	}

	printf("%d\n", n);
}