n, m = list(map(int, input().split()))
a = list(map(int, input().split()))
pos = 1
sum = 0

for i in range(m):
    if(pos <= a[i]):
        sum += a[i] - pos
    else:
        sum += (n - pos) + a[i]
    pos = a[i]

print(sum)
