# import re

# s = input()
# subS = input()

# matcher = re.compile(subS)
# match = matcher.search(s)

# if not match: 
#     print('(-1, -1)')
    
# while match:
#     print('({0}, {1})'.format(match.start(), match.end() - 1))
#     match = matcher.search(s, match.start() + 1)





import re
for i in range(int(input())):
    s = input().strip()
    match = re.search(r'^[456]\d{3}(-?)\d{4}\1\d{4}\1\d{4}$',s)
    if match:
        z = "".join(match.group(0).split('-'))
        zomato = re.search(r'(\d)\1{3,}',z)
        if zomato:
            print('Invalid')
        else :
            print('Valid')
    else:
        print('Invalid')
