a = 2020
b = 2021

for i in range(int(input())):
    n = int(input())
    while n >= a:
        if n % a == 0 or n % b == 0:
            print("YES")
            break
        else:
            n -= 2020
            if n % b == 0:
                print("YES")
                break
    if n < a:
        print("NO")
