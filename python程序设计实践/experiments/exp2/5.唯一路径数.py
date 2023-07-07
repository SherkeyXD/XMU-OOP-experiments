def path(a : int, b : int) -> int:
    if a==1:
        return 1
    elif b==1:
        return 1
    else:
        return path(a-1, b) + path(a, b-1)

a, b = map(int, input().split())
print(path(a, b))
