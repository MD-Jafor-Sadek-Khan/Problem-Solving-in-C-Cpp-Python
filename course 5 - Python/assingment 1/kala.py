# All the globals 
# s="LLLRRRLRLR"
# s="RRRLLLRLRL"
s = input()
s += " "
c_L = 0
c_R = 0
c = 0
ss = ""
 
# calculation part  
for i in range(len(s)):
    if c_R == c_L and c_L != 0:
        c_L = 0
        c_R = 0
        ss += "\n"
        # print("iteration=",i,"string=",ss)
        c += 1
 
    if s[i] == "L":
        ss += "L"
        c_L += 1
    elif s[i] == "R":
        ss += "R"
        c_R += 1
 
print(c)
print(ss.strip())