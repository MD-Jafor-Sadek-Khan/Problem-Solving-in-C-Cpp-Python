# #!/bin/python3

# import math
# import os
# import random
# import re
# import sys



# if __name__ == '__main__':
#     nm = input().split()

#     n = int(nm[0])

#     m = int(nm[1])

#     arr = []

#     for _ in range(n):
#         arr.append(list(map(int, input().rstrip().split())))

#     k = int(input())
#     # print(k,arr,n,m,nm)
    
    
    
#     li = list(zip(*arr))
#     # print(li)
    
#     sort = sorted(li[k])
#     # print(sort)
#     result = []
#     mini = []
#     for i in sort:
#         index = li.index(i)
#         print(index)
#         for j in range(m):
#             mini.append(li[j][index])
            
#         result.append(mini)
        
#     print(result)



#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    nm = input().split()

    n = int(nm[0])

    m = int(nm[1])

    arr = []

    for _ in range(n):
        arr.append(list(map(int, input().rstrip().split())))

    k = int(input())

    P=sorted(arr,key=lambda row:row[k])
    # print(P)
    # print(*P[0])
    for i in range(len(P)):
        print(*P[i])
