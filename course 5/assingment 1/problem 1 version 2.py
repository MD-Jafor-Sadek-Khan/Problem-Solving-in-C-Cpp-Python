s="LLLRRRLLR"
Lflag=0
Rflag=0
gString=""
Final=[]
LastR=0
R_count=0
for i in s:
   if i=="R" and s[(s.index[i]-1)]=="L": 
       LastR=s.index(i)
       for i in range(LastR,len(s)):
           if s[i]!="R":
               break
           else:
               R_count+=1
       
       