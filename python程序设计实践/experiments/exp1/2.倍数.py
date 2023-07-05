a, b = map(int, input().split())
if a%b==0 or b%a==0:
    print("They are multiples", end="")
else:
    print("They are not multiples", end="")