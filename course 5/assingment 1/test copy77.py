s=input()
s+=" "
c_L=0
c_R=0
c=0
ss=""
for i in range(0,len(s)):
    if c_R==c_L and c_L!=0:
        c_L=0
        c_R=0
        ss+="\n"
        c+=1

    if s[i]=="L":
        ss+="L"
        c_L+=1
    elif s[i]=="R":
        ss+="R"
        c_R+=1

print(c,"\n")
ss = ss[:-1]  

print(ss)

        