# import re

# for i in range(int(input())):
#     s = input()
#     match = re.match(r'^[456]\d{3}-?\d{4}-?\d{4}-?\d{4}-?',s)
#     if match:
#         x = match.group().split("-")
#         # print(match.group())
#         z = "".join(x)
#         zomato = re.search(r'1{4,4}|2{4,4}|3{4,4}|4{4,4}|5{4,4}|6{4,4}|7{4,4}|8{4,4}|9{4,4}|0{4,4}',z)
#         if zomato:
#             print("Invalid")
#         else:
#             print("Valid")

#     else:
#         print("Invalid")


# import re

# s = "54651321684666"
# zomato = re.search(r'(\d)\1{3,}', s)
# if zomato:
#     print("yes")
# else:
#     print("no")

import re
for i in range(int(input())):
    s = input()
    match = re.search(r'^[456]\d{3}(-?)\d{4}\1\d{4}\1\d{4}$',s)
    if match:
        z = "".join(match.group().split('-'))
        zomato = re.search(r'(\d)\1{3,}',z)
        if zomato:
            print('Invalid')
        else :
            print('Valid')
    else:
        print('Invalid')