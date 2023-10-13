sizes = list(map(int, input().split()))
sizeOfList = sizes[0]
sizeOfSets = sizes[1]

givenList = list(map(int,input().split()))
setA = set(map(int,input().split()))
setB = set(map(int,input().split()))
Happiness = 0
for i in range(sizeOfList):
    if givenList[i] in setA:
        Happiness += 1
    elif givenList[i] in setB:
        Happiness -= 1

print(Happiness)
