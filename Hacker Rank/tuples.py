n = int(input())
l = []

j = input()

for i in j:
    if i != " ":
        l.append(int(i))
  
t = tuple(l)     
hash_value = hash(t)
print(hash_value)