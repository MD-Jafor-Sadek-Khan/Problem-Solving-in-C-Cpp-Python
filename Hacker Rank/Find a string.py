n = input()
t = input()
l = []
for i in n:
    l.append(i)
count = 0
for i in range(0,len(n)-(len(t)-1)):
    if n[(i):i+len(t)] == t:
        count += 1
print(count)