n = int(input())
st = input()
li = [*st]

li2 = []

for i in li:
    if i != " ":
        li2.append(int(i))

# # print(li2)
# sum = 0
# for i in li2:
#     sum += i

# # print(sum)

# unique = set(li2)
# sumOfUnique = 0 
# for i in unique:
#     # print(i)
#     sumOfUnique += i
    
# # print(sumOfUnique*n)

# tot = (sumOfUnique*n) - sum
# # print(tot)
# flo = tot / (n-1)
# print(f"{flo:.0f}")

# different solution 

# dic = {}

# for i in li2:
#     if i in dic:
#         dic[i] += 1
#     else:
#         dic[i] = 1

# print(dic)
# print(*[c for c in dic if dic[c] != n])


# different solution 

unique = set(li2) 
# print(unique)
tot = (sum(unique)*n) - sum(li2) 
# print(tot)
print(tot // (n-1))

li2.count()