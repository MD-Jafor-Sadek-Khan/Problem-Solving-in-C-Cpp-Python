# import re

# for i in range(int(input())):
#     s = "rahat@gmail.com"
#     name = ""
#     provider = ""
#     extensio:
#         name=re.search(r'[^@]+',s).group()
#         provider=re.search(r'(?<=@)\w+(?=\.)',s).group()
#         extension=re.search(r'(?<=\.)\w{3,3}',s).group()
#         print(name,provider,extension)



import re
def fun(s):

    result = re.match(r"^[a-zA-Z][\w-]*@[a-zA-Z0-9]+\.[a-zA-Z]{1,3}$",s)
    return result