# x = int(input())
# y = int(input())
# z = int(input())
# n = int(input())

# # 1
# # 1
# # 2
# # 4
# permutations = (x+1) * (y+1) * (z+1)

# l = [0,0,0]
# j = [0]*3
# result = []
# for i in range(0,permutations):
#     result.append(j)
    
#     if l[2] < z:
#         l[2] += 1
#         j = [l[0], l[1], l[2]]
#     else:
#         if l[1] == y:
#             l[1] = (l[1]+1)      
#             l[2] = 0
#             j = [l[0], l[1], l[2]]
#         else:
#             l[2] = 0
#             j = [l[0], l[1], l[2]]
    
    
   
# print(result)



x = int(input())
y = int(input())
z = int(input())
n = int(input())

combo = []

for i in range(0,x+1):
    for j in range(0,y+1):
        for k in range(0,z+1):
            if i+j+k != n:
                combo.append([i,j,k])
            
print(combo)