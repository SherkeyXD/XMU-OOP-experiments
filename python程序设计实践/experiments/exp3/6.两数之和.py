target, n = map(int, input().split())
a = list(map(int, input().split()))
hashtable = dict()
for i, num in enumerate(a):
    if target - num in hashtable:
        print(hashtable[target - num], i)
        break
    hashtable[num] = i