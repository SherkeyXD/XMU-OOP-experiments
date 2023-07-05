# Ref: https://blog.csdn.net/blowfire123/article/details/112455458
n, m = map(int, input().split())
grids = [[0] * m for _ in range(n)]
t, l, r, b = 0, 0, m - 1,  n - 1
num = 1

while True:
    for i in range(l, r + 1):
        grids[t][i] = num
        num += 1
    t += 1
    if t > b: break

    for i in range(t, b + 1):
        grids[i][r] = num
        num += 1
    r -= 1
    if r < l: break

    for i in range(r, l - 1, -1):
        grids[b][i] = num
        num += 1
    b -= 1
    if  b < t: break

    for i in range(b, t - 1, -1):
        grids[i][l] = num
        num += 1
    l += 1
    if r < l: break

for i in range(n):
    print(" ".join(str(x) for x in grids[i]))