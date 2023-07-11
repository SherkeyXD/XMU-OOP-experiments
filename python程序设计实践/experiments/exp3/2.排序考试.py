n = int(input())
for i in range(n):
    nums = list(map(int, input().split()))[1:]
    nums.sort()
    print(" ".join(map(str, nums)))