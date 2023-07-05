price = [4.0, 4.5, 5.0, 2.0, 1.5]
a, b = map(int, input().split())
print("Total: $ %.2f" % (price[a-1] * b))