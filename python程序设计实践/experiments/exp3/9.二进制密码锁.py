import sys

cur = input()
n = len(cur)
cur = int(cur, 2)
tar = int(input(), 2)

min_times = sys.maxsize

for p in range(2):
    times = 0
    next = p
    lock = cur

    for i in range(n):
        if next:
            times += 1
            if i > 0:
                lock ^= (1 << (i - 1))
            if i < n - 1:
                lock ^= (1 << (i + 1))
            lock ^= (1 << i)
        next = (lock >> i) & 1 != (tar >> i) & 1

    if lock == tar:
        min_times = min(min_times, times)

if min_times == sys.maxsize:
    print("impossible")
else:
    print(min_times)