import re
c = "QWRTYPSDFGHJKLZXCVBNMqwrtypsdfghjklzxcvbnm"
v = "AEIOUaeiou"
result = re.findall(r'(?<=[%s])([%s]{2,})[%s]' % (c,v,c), input())
# print(result)
if result:
    for i in result:
        print(i)
else:
    print("-1")

