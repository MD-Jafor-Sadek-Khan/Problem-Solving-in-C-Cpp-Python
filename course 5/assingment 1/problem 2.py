# Taking input from the user

numberOfElements = int(input())


inputString = input()

inputList = inputString.split()


outputList = []
for i in range(numberOfElements):
    outputList.append(int(inputList[i]))

# Input phase done
# Calculation phase begins

checkList = [int(0)] * (max(outputList)+1)

for j in range(len(outputList)):
    for i in outputList:
        checkList[i] += 1 
print(checkList)