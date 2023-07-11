target, n = map(int, input().split())
a = list(map(int, input().split()))
ans_set = set()

for i in range(n - 2):
    j, k = i + 1, n - 1
    while j < k:
        s = a[i] + a[j] + a[k]
        if s == target:
            ans = [a[i], a[j], a[k]]
            ans_tuple = tuple(ans)
            ans_set.add(ans_tuple)
            j += 1
            k -= 1
        elif s < target:
            j += 1
        else:
            k -= 1

ans_list = list(ans_set)
ans_list.sort()
for ans in ans_list:
    print(" ".join(map(str, ans)))