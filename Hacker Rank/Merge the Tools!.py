# import re

# s = input()
# k = int(input())
# y = "aa"
# # li = []
# # print(len(s)//k)
# # print(len(s))
# # for i in range(0,len(s)//k,k):
# #     li.append(s[i:i+k])
# # print(li)

# li = re.findall(r'({3})*',s)
# # print(li)

# import re
# from collections import Counter
# def merge_the_tools(string, k):
#     result = []
#     i = 0
#     itteration = len(string) // k
#     for _ in range(0,itteration):
        
#         result.append(string[i:i+k])
#         i += k
#     print(result)
    
#     match = Counter(result)
#     print(match)
    
# if __name__ == '__main__':
#     string, k = input(), int(input())
#     merge_the_tools(string, k)


import re
from collections import Counter
def merge_the_tools(string, k):
    result = []
    i = 0
    itteration = len(string) // k
    for _ in range(0,itteration):
        
        result.append(string[i:i+k])
        i += k
    final = []
    match = []
    for i in result:
        final.append(list(i))
    # print(final)
    for i in final:
        match.append(Counter(i))
    dream = ""
    for i in match:
        kala = "".join(i.keys())
        print(kala)
    
        