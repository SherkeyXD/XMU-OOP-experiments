n=1
while True:
    num = list(map(int, input().split()))
    if num[0] == num[1] == num[2] == num[3] == -1:
        break
    ans = (5544 * num[0] + 14421 * num[1] + 1288 * num[2] - num[3] + 21252) % 21252
    # 中国剩余定理 Ref: https://zhuanlan.zhihu.com/p/103394468
    ans = 21252 if not ans else ans
    print("Case {}: the next triple peak occurs in {} days.".format(n, ans))
    n += 1