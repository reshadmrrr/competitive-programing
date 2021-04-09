n, m, a, b = list(map(int, input().split()))

if(m * a <= b):
    print(n * a)
else:
    print(int(n / m) * b + min((n % m) * a, b))
