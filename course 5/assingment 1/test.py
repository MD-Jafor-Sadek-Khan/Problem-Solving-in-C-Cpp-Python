# string = "RRRLLLLLRR"
string=input()

# Dividing the "R" parts and the "L" parts 
l_parts = string.split("R")  
r_parts = string.split("L")  
l_parts = [part for part in l_parts if part!=""] 
r_parts = [part for part in r_parts if part!=""] 

# print(l_parts,r_parts)

# Getting their lengths 
l_lengths = [len(part) for part in l_parts]
r_lengths = [len(part) for part in r_parts]

# print(l_lengths,r_lengths)



# comparing and Getting the smaller list 
smaller_lengths = [min(l, r) for l, r in zip(l_lengths, r_lengths)]

# print(smaller_lengths)




# Making dictionary to identify the the charecters in indexes
result_l = {}

for i in range(len(string)):
    if string[i] == 'L':
        result_l[i] = string[i]

# print(result_l)


result_r = {}

for i in range(len(string)):
    if string[i] == 'R':
        result_r[i] = string[i]

# print(result_r)


# combining
result_l.update(result_r)

# print(result_l,"Length of string",len(string))
# print(result_l[0])


final=[]
gstring=""
z=0

# Calculation part 
for i in range(max(len(l_lengths),len(r_lengths))+1):
    if z>len(smaller_lengths)-1:
        break
    
    if i==0:
        if result_l[0]=="R":
            # print("55 z=",z,"i=",i)
            for x in range(smaller_lengths[z]*2):
                if x<smaller_lengths[z]:
                    gstring+="R"
                else:
                    gstring+="L"
                
            final.append(gstring)
            gstring=""
            # print("63 z=",z,"i=",i)
            z+=1
            # print("65 z=",z,"i=",i)
        else:
            # print("67 z=",z,"i=",i)
            for x in range(smaller_lengths[z]*2):
                if x<smaller_lengths[z]:
                    gstring+="L"
                else:
                    gstring+="R"
            final.append(gstring)
            gstring=""
            # print("75 z=",z,"i=",i)
            z+=1
            # print("77 z=",z,"i=",i)
    elif i>0:
        # print("79 z=",z,"i=",i)
        if result_l[(l_lengths[i-1]+r_lengths[i-1])]=="R":
            for x in range(smaller_lengths[z]*2):
                if x<smaller_lengths[z]:
                    gstring+="R"
                else:
                    gstring+="L"
            final.append(gstring)
            gstring=""
            # print("88 z=",z,"i=",i)
            z+=1
            # print("90 z=",z,"i=",i)
        else:
            # print("92 z=",z,"i=",i)
            for x in range(smaller_lengths[z]*2):
                if x<smaller_lengths[z]:
                    gstring+="L"
                else:
                    gstring+="R"
            final.append(gstring)
            gstring=""
            # print("100 z=",z,"i=",i)
            z+=1
            # print("102 z=",z,"i=",i)
    # for j in range(smaller_lengths[i]*2):
        
print(len(final))
for i in final:
    print(i)



    