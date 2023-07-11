n = int(input())
cubes = [i ** 3 for i in range(2, n + 1)]
for a in range(2, n+1):
    for b in range(2, a):
        for c in range(b, a):
            for d in range(c, a):
                if cubes[a-2] == cubes[b-2]+cubes[c-2]+cubes[d-2]:
                    print("Cube = {}, Triple = ({},{},{})".format(a, b, c, d))
