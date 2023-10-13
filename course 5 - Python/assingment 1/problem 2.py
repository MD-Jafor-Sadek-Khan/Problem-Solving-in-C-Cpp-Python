# Taking input from the user
 
numberOfElements = int(input())
 
 
inputString = input()
 
inputList = inputString.split()
 
 
outputList = []
for i in range(numberOfElements):
    outputList.append(int(inputList[i]))
 
# Input phase done
# Calculation phase begins
 
 
checkList = {}
 
for i in outputList: 
    checkList[i]=int(0)
 
for i in outputList: 
    checkList[i]+=1
 
totalCount = 0
 
# Calculating totalCount 
 
for i in checkList.keys():
    if i == checkList[i]:
        continue
    elif i< checkList[i]:
        totalCount += checkList[i]-i
    else:
        totalCount+= checkList[i]
 
print(totalCount)