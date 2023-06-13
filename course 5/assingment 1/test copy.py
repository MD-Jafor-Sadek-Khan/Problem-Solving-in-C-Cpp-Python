s="LLLRRRLLR"
lastR=0
situations=0
situations_list=[0]
rev_situation_list=[]
for i in range(lastR,len(s)):
    if s[i]=="R" and s[i-1]=="L":
        situations+=1
        situations_list.append(i)
    if s[i]=="L" and s[i-1]=="R":
        rev_situation_list.append(i)
# print(situations, situations_list, rev_situation_list)       
     
        
for i in range(0,situations):
    L_count=0
    R_count=0
    L_count=situations_list[i+1]-rev_situation_list[i]
    print(L_count)
    if (i+1)!=len(rev_situation_list) and (i+1)!=len(situations_list):
        
        R_count=rev_situation_list[i+1]-situations_list[i+1]
    else:
        R_count=len(s)- situations_list[i+1]
    print(R_count)    
    
    
       