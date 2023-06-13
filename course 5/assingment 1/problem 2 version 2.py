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
# Creating isolatedList to find the unique key values of the dictionary 
isolatedList = []

for i in outputList:
    if i not in isolatedList:
        isolatedList.append(i)

# Creating the dictionary to reduce time complexity 
for i in isolatedList:  #Using isolatedList to reduce iterations 
    checkList[i]=int(0) # Initializing each key to 0

for i in outputList: # Now taking the actutal count of each element inside the Dictionary
    checkList[i]+=1

totalCount = 0

# Calculating totalCount 

for i in isolatedList:
    if i == checkList[i]:
        continue
    elif i< checkList[i]:
        totalCount += checkList[i]-i
    else:
        totalCount+= checkList[i]

print(totalCount)