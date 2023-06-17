# Input Phase
NMstring = input()
NM= NMstring.split(" ")
N=int(NM[0])
M=int(NM[1])

listOfNumbersString = input()
listOfNumbersSplitted=listOfNumbersString.split(" ")
    

listOfNumbers=[] #
for i in listOfNumbersSplitted:
    if int(i) <=M:
        listOfNumbers.append(int(i))

# Calculation Phase
trackerList = [0] * (M + 1)

for i in listOfNumbers:
    trackerList[i] += 1

for i in range(1, (M+1)):
    print(trackerList[i])
