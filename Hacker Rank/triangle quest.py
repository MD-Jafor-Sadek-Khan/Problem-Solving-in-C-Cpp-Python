for i in range(1, int(input())):
    print(i if i == 1 else (i * (10 ** i) + i) + (11 * (10** (i - 1))) * i)
