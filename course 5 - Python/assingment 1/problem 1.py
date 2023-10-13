# All the globals 

# s="LLLRRRLRLR"
# s="RRRLLLRLRL"
string = input()
string += " " #Adding a space for the end sequence itteration
counterOfL = 0
counterOfR = 0
basicCounter = 0
finalString = ""
 
# Calculation part  

for i in range(len(string)):
    # If counters of L and R equal then reset
    if counterOfR == counterOfL and counterOfL != 0:
        counterOfL = 0
        counterOfR = 0
        finalString += "\n"
        # print("Iteration No.=",i,"Final String=",finalString)
        basicCounter += 1
 
# Counter increminting part 
    if string[i] == "L":
        finalString += "L"
        counterOfL += 1
    elif string[i] == "R":
        finalString += "R"
        counterOfR += 1

#Output
print(basicCounter)
print(finalString.strip())