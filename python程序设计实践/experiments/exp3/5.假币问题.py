def print_feit_coin(left: list, right: list, res: list):
    for iCoin in range(ord('A'), ord('L') + 1):
        iCoin = chr(iCoin)
        if is_feit_coin(left, right, res, iCoin, True):
            print(iCoin, "is the counterfeit coin and it is light. ")
            break
        elif is_feit_coin(left, right, res, iCoin, False):
            print(iCoin, "is the counterfeit coin and it is heavy. ")
            break


def is_feit_coin(left: list, right: list, res: list, iCoin: str, isLight: bool) -> bool:
    for i in range(3):
        l, r, result = left[i], right[i], res[i]
        if not isLight:
            l, r = r, l
        if result[0] == 'e':
            if iCoin in l or iCoin in r:
                return False
        elif result[0] == 'u':
            if iCoin not in r:
                return False
        elif result[0] == 'd':
            if iCoin not in l:
                return False
    return True


n = int(input())
for i in range(n):
    left = []
    right = []
    res = []
    for j in range(3):
        l, r, result = input().split()
        left.append(l)
        right.append(r)
        res.append(result)
    print_feit_coin(left, right, res)