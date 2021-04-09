m, s = map(int, input().split())

max_num = 0
d = -1

for i in range(m):
    d = min(9, s)
    max_num = max_num * 10 + d
    s -= d
min_num = str(max_num)[::-1]
for i in range(m - 1, 0, -1):
    pass
    
# not solved yet