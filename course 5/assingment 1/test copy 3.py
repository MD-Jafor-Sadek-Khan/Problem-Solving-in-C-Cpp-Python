import math

# s = input()
s="LLLRRLLLRRLRRR"
# LLRRLLLRRR
R = []
L = []
L_Blocks = []
R_Blocks = []
R_Count = 0
L_Count = 0
final_trajectories = []
gstring = ""
for i in range(1, len(s)):
    if s[i - 1] == "R":
        R_Count += 1
        if s[i] == "L" or i == len(s) - 1:
            if i == len(s) - 1:
                if s[i] == "R":
                    R_Count += 1
            R_Blocks.append(R_Count)
            R_Count = 0

    if s[i - 1] == "L":
        L_Count += 1
        if s[i] == "R" or i == len(s) - 1:
            if i == len(s) - 1:
                if s[i] == "L":
                    L_Count += 1
            L_Blocks.append(L_Count)
            L_Count = 0

if (s[len(s) - 1] == "R" and s[len(s) - 2] == "L") or (
    s[len(s) - 1] == "L" and s[len(s) - 2] == "R"
):
    if s[len(s) - 1] == "R" and s[len(s) - 2] == "L":
        R_Blocks.append(1)
    else:
        L_Blocks.append(1)

indexes = []

# for i in range(abs(R_Blocks[0]-L_Blocks[0]),abs(R_Blocks[0]+L_Blocks[0])):
#     gstring+=s[i]

counter=0
if len(L_Blocks) > len(R_Blocks):
    for i in range(0, len(R_Blocks)):
        for j in range(abs(R_Blocks[i] - L_Blocks[i])+counter, abs(R_Blocks[i] + L_Blocks[i])+counter):
            counter+=1
            gstring += s[j]
        final_trajectories.append(gstring)
        gstring = ""
elif len(L_Blocks) < len(R_Blocks):
    for i in range(0, len(L_Blocks)):
        for j in range(abs(R_Blocks[i] - L_Blocks[i])+counter, abs(R_Blocks[i] + L_Blocks[i])+counter):
            counter+=1
            
            gstring += s[j]
        final_trajectories.append(gstring)
        gstring = ""
elif len(L_Blocks) == len(R_Blocks):
    for i in range(0, len(L_Blocks)):
        for j in range(abs(R_Blocks[i] - L_Blocks[i])+counter, abs(R_Blocks[i] + L_Blocks[i])+counter):
            counter+=1
            
            gstring += s[j]
        final_trajectories.append(gstring)
        gstring = ""


print(len(final_trajectories),L_Blocks,R_Blocks)

for i in final_trajectories:
    print(i)
