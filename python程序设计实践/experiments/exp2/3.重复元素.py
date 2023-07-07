a = input().split()
b = []
c = []
for i in a:
    if i not in b:
        b.append(i)
    else:
        if i not in c:
            c.append(i)

print(' '.join(c))