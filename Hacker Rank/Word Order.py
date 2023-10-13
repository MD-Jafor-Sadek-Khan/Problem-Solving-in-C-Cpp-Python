# n = int(input())

# result = []
# l = []
# temp =""
# times = [1]*n
# for i in range(0,n):
#     temp = input()
#     if temp in l:
#         times[l.index(temp)] += 1
#         times[i] = -1
#     else:
#         l.append(temp)

# for i in times:
#     if i == -1:
#         continue
#     elif i == 0:
#         result.append(str(i))
#     else:
#         result.append(str(i))

# print(len(result))
# f = " ".join(result)
# print(f)





# # different approach


# n = int(input())
# userSet = set()
# userList = []
# result = [0]*n
# for i in range(0,n):
#     name = input()
#     userSet.add(name)
#     userList.append(name)
    
# length = len(userSet)
# for i in range(0,len(userSet)):
#     p = userSet.pop()
#     result[userList.index(p)] = userList.count(p)
  
# final = []  
# for i in result:
#     if i > 0:
#         final.append(str(i))
# print(length)
# print(" ".join(final))



# # different approach  
# itterator = int(input())
# list = []
# count = [0]*itterator
# for i in range(0, itterator):
#     n = input()
#     if n not in list:
#         list.append(n)
#         count[list.index(n)] += 1
#     else:
#         count[list.index(n)] += 1

# count = [str(x) for x in count if x != 0]
# print(len(count))
# print(*count)


# different approach 

# times = {}
# list = []

# for i in range(0, int(input())):
#     n = input()
#     if n not in list:
#         list.append(n)
#         times[n] = 1
#     else:
#         times[n] += 1

# print(len(list))
# print(*times.values())



# for pypy3 


# times = {}
# l = []

# for i in range(0, int(input())):
#     item = input()

#     if item not in l:
#         l.append(item)
#         times[item] = 1
#     else:
#         times[item] += 1

# print(len(l))
# print(" ".join([str(times[i]) for i in l]))


# different solution 


from collections import Counter
l = []

for i in range(int(input())):
    l.append(input())

result = Counter(l)
print(len(result.keys()))
print(*result.values())