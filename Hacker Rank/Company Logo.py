from collections import Counter

s = input()
s = sorted(s)

dic  = Counter(s)


for i, v in dic.most_common(3):
    print(i,v)