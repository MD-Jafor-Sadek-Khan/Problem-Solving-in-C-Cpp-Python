# import re

# itter = int(input())
# for i in range(0,itter):
#     result = input()
#     result = re.sub(r"\ \&\&\ "," and ",result)
#     result = re.sub(r"\ \|\|\ "," or ",result)
#     print(result)

# import re
# s = ""

# for i in range(int(input())):
#     result = input()
#     t = re.sub(r'(?<= )(\|\||&&)(?= )',lambda x : "and" if x == "&&" else "or" ,result)
#     s = s + t + "\n"
# print(s)


import re
s = ""

for i in range(int(input())):
    result = input()
    t = re.sub(r'(?<= )(\|\||&&)(?= )',lambda x : "or" if x.group() == "||" else "and",result)
    s = s + t + "\n"
print(s)