# # import re
# # # m = re.search(r'\d+','1234')
# # # print(m)
# # # print(m.end())
# # # print(m.start())

# # s = "aaabaa"
# # m = "aa"
# # i = len(m)


# # result =re.finditer(r'(?={})'.format(m), s)
# # result2 =re.findall(r'(?={})'.format(m), s)
# # print(result2)
# # for i in result:
# #     print(i.span())
# # # output = ["aa","aa","aa"]



# import re
# # s = "aaabaa"
# # m = "aa"
# s, m = input(), input() 
# # print(s,m)
# len = len(m)
# e = 0
# while s:
#     m = re.search(r'[%s]{%i}' % (m,len),s)
    
#     if m:
#         print(tuple((m.start(), m.end()-1)))
#         s = s[m.end()-1:]





# s = "aaabaa"
# while s:
#     s = s[2:]
#     print(s)



import re

s = input()
subS = input()

matcher = re.compile(subS)
match = matcher.search(s)

if not match: 
    print('(-1, -1)')
    
while match:
    print(tuple((match.start(), match.end() - 1)))
    match = matcher.search(s, match.start() + 1)