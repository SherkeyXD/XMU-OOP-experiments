def isPrime(n : int) -> bool:
    if n <= 1:
        return False
    for i in range(2, n):
        if n%i == 0:
            return False
    return True

a = int(input())
for i in range(a+1):
    if isPrime(i):
        print(i, end=' ')