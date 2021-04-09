nb = int(input())
b = map(int, input())
ng = int(input())
g = map(int, input())
b = sorted(b)
g = sorted(g)
cnt = 0
for i in b:
    for j in g:
       if abs(i - j) <= 1 and i != 0 and j != 0:
           cnt += 1
           i = j = 0
print(cnt)

#unsolved 



