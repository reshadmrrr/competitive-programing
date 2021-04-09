n, k = list(map(int, input().split()))
y = list(map(int, input().split()))
cnt = 0
for i in range(n):
    if(5 - y[i] >= k):
        cnt += 1
print(int(cnt / 3))
