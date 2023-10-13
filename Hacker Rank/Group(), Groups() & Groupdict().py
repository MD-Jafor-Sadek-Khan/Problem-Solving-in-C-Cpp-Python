import re

n = input()

m= re.findall(r'([A-Za-z0-9])\1+', n)

print(*m)


# import re
# m = re.findall(r'([A-Za-z0-9])\1+',input())
# print(m)
# if m:
#     print(m[0])
# else:
#     print(-1)
    
    
# import re

# n = "..%%3216542245"
# pattern = r'([A-Za-z0-9])\1+'
# match = re.search(pattern, n)

# print(match)
# if match:
#     print(match.group())

    
