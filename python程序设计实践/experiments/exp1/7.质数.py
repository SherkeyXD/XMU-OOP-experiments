def isPrime(n : int) -> bool:
    if n <= 1:
        return False
    for i in range(2, n):
        if n%i == 0:
            return False
    return True

a = int(input())
for i in range(a):
    b = int(input())
    if isPrime(b):
        print("%d is prime" % b)
    else:
        print("%d is not prime" % b)