import re
for _ in range(int(input())):
    
    n = input()
    
    try:
        rp = re.compile(r'[{}]'.format(n))
        print("True")
    except re.error:
        print("False")


# try:
#     x = 1/1
#     print("true")
    
# except:
#     print("false")