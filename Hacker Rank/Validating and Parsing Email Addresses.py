# from email.utils import *
# print (parseaddr('<DOSHI@hackerrank.com>'))
# print (getaddresses(('Doshi','DOSHI@hackerrank.com')))



from email.utils import *
import re
for i in range(int(input())):
    l = input().split()
    lis = getaddresses(l)
    email = list(lis[1])[1]
    result = re.match(r'[A-Za-z](\w|\.|-|_)+@[A-Za-z]{2,}\.[A-Za-z]{1,3}$', email)
    if result:
        print(*l)