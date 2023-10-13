s=input()
L=0
R=0
total_L=[]
total_R=[]
for i in range(1,len(s)):
    if s[i-1]=="L":
        L+=1
    if s[i]=="R":
        if L>0:
            total_L.append(L)
        L=0
    if s[i-1]=="R":
        continue

print(total_L)

for i in range(len(s)-1,0,-1):
    if s[i]=="R":
        R+=1
    if s[i-1]=="L":
        if R>0:
            total_R.append(R)
        R=0
    if s[i]=="L":
        continue

print(total_R)
        
 