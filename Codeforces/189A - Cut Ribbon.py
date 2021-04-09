n, a, b, c = list(map(int, input().split()))

d = [0]*(n + 1)

for i in range(a, n + 1):
    d[i] = max(d[i], d[i - a] + 1)
for i in range(b, n+1):
    d[i] = max(d[i], d[i - a] + 1)
for i in range(c, n+1):
    d[i] = max(d[i], d[i - a] + 1)

print(d[n])
print(d)
