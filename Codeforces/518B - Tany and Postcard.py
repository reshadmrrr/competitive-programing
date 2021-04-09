s = list(input())
t = list(input())

y = w = 0

for i in s:
    indx = t.find(i)
    if(indx != -1):
        t = t[:indx] + "_" + t[indx + 1:]
        y += 1
    else:
        w += 1
print(str(y) + " " + str(w))

# it gets TLE
