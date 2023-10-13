from itertools import combinations
n = int(input())
l = list(map(str,input().split()))
k = int(input())
# print(n,l,k)



combo = list(combinations(l,k))

# print(combo)

combo2 = list(filter(lambda a: "a" in a, combo))
# print(combo2)


print(len(combo2)/len((combo))) 

