n = int(input())
a = list(map(int, input().split()))

mx = max(a)
sum = 0

for i in range(n):
  sum = sum + (mx - a[i])

print(sum)
