t = int(input())

while t > 0:
    n = int(input())
    for i in range(2, 30):
        sol = n / (2 ** i - 1)
        if sol == int(sol):
            print(int(sol))
            break
    t -= 1
