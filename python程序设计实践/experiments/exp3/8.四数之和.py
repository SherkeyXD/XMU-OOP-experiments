target, n = map(int, input().split())
a = list(map(int, input().split()))
ans_set = set()

for i in range(n - 3):
    for j in range(i + 1, n - 2):
        l, r = j + 1, n - 1
        while l < r:
            s = a[i] + a[j] + a[l] + a[r]
            if s == target:
                ans = [a[i], a[j], a[l], a[r]]
                ans_tuple = tuple(ans)
                ans_set.add(ans_tuple)
                l += 1
                r -= 1
            elif s < target:
                l += 1
            else:
                r -= 1

ans_list = list(ans_set)
ans_list.sort()
for ans in ans_list:
    print(" ".join(map(str, ans)))