class Matrix:
    def __init__(self):
        self.lights = [[0] * 8 for _ in range(6)]
        self.times = [[0] * 8 for _ in range(6)]
        for i in range(1, 6):
            line = input().split()
            for j in range(1, 7):
                self.lights[i][j] = int(line[j-1])
    def guess(self):
        for i in range(2, 6):
            for j in range(1, 7):
                self.times[i][j] = (self.times[i-1][j] + self.lights[i-1][j] + self.times[i-1][j-1] + self.times[i-2][j] + self.times[i-1][j+1]) % 2
        for j in range(1, 7):
            if self.lights[5][j] != (self.times[5][j] + self.times[5][j-1] + self.times[5][j+1] + self.times[4][j]) % 2:
                return False
        return True
    def solve(self):
        for i in range(1, 7):
            self.times[1][i] = 0
        while not self.guess():
            c = 1
            self.times[1][1] += 1
            while self.times[1][c] > 1:
                self.times[1][c] = 0
                c += 1
                self.times[1][c] += 1
    def print(self):
        for i in range(1, 6):
            print(" ".join(map(str, self.times[i][1:7])), end=' \n')

t = int(input())
for i in range(1, t+1):
    m = Matrix()
    print("PUZZLE #", i, sep='')
    m.solve()
    m.print()