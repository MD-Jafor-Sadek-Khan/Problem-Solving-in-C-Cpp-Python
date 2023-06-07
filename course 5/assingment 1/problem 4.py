# Taking input from the user

numberOfElements = int(input())


inputString = input()

inputList = inputString.split()


outputList = []
for i in range(numberOfElements):
    outputList.append(int(inputList[i]))

# Input phase done
# Calculation phase begins
operationCOUNT = 0
while True:
    flag = 0
    for i in outputList:
        if i % 2 == 0:
            flag += 1

    if numberOfElements == flag:
        for i in range(len(outputList)):
            j = outputList[i] / 2
            outputList[i] = j

    else:
        break

    operationCOUNT += 1

#  Calculation phase done
#  Giving output of the operationCOUNT
print(operationCOUNT)
