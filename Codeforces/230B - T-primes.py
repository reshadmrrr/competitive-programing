n = int(input())
li = list(map(int, input().split()))


def is_prime(a):
    if a == 2:
        return True
    elif a == 1 or a % 2 == 0:
        return False
    else:
        for i in range(3, int(a ** 0.5), 2):
            if a % i == 0:
                return False
    return True


def chck(a):
    s = int(a ** 0.5)
    if s * s == a and is_prime(s):
        return "YES"
    else:
        return "NO"


for l in li:
    print(chck(l))
