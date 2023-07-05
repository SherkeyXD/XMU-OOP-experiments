import itertools as it

a = int(input())
res = it.permutations(range(1, a+1))
for i in res:
    print(" ".join(map(str, i)), end=" \n")