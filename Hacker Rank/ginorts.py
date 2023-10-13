# result = "".join((sorted(input(), key=lambda x: (x.islower() - x.isdigit(), x in '02468', x))))
# print(result)

# result2 = "".join((sorted(input(), key=lambda x: (x.isdigit() - x.islower(), x in '02468', x))))
# print(result2)

# result2 = "".join((sorted(input(), key=lambda x: (x.isdigit() - x.islower(), x in '02468', x))))
# print(result2)


# # import re
# # s = input()

# # cap = sorted(re.findall(r'[A-Z]',s))
# # sm = sorted(re.findall(r'[a-z]',s))
# # undg = re.findall(r'[0-9]',s)
# # dg = sorted(undg, key = lambda x :x.isdigit() - x x in "02468", x)

# # print(cap) 
# # print(sm) 
# # print(dg)


# different solution  
from string import ascii_lowercase, ascii_uppercase 

matcher = ascii_lowercase + ascii_uppercase + "1357902468"
# print(matcher)
x = input()
s = []
if len(x) > len(matcher):
    s = [""]*len(x)
else:
    s = [""]*len(matcher)
    
for i in x:
    if i in matcher:
        s[matcher.index(i)] += i
final =""
for i in s:
    if i != "":
        final += i

print(final)


