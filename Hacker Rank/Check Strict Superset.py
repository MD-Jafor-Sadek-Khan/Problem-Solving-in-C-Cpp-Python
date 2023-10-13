motherSet = set(map(int, input().split()))
listOfSets = []
for i in range(int(input())):
    listOfSets.append(list(map(int, input().split()))) 

flag = True 
# print(listOfSets)
for i in range(len(listOfSets)):
    if not motherSet.issuperset(listOfSets[i]):
        flag = False
        
print(flag)
    

    
