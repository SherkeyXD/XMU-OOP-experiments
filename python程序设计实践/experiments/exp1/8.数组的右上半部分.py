a = input()
m = []
for i in range(12):
    tmp = list(map(float, input().split()))
    for j in range(12):
        if j>i:
            m.append(tmp[j])
if a=="S":
    print("%.1f" % sum(m))
elif a=="M":
    print("%.1f" % (sum(m)/len(m)))