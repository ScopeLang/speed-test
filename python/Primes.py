def isPrime(n):
	i = 2
	while (i < n):
		if (n % i == 0):
			return False
		i += 1
	return True

n = 0
p = 0
while (p <= 10000):
	n += 1
	if isPrime(n):
		p += 1

print(n)