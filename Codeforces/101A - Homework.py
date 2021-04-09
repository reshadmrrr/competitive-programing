n = str(input())
k = int(input())

s = set(n)

t = [(x, n.count(x)) for x in s]

l = len(t)

for (a, i) in t:
	if i > k:
		break
	n = n.replace(a, '')
	k -= i
	l -= 1
print(str(l) + "\n" + n)


#not solved yet. 
