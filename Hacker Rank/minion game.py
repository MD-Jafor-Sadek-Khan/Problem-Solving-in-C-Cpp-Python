# def minion_game(string):
#     l =v(string)
#     # print(l)
#     if l[0] > l[1]:
#         print("Stuart",l[0])
#     elif l[0] < l[1]:
#         print("Kevin",l[1])
#     else:
#         print("DRAW")  
    
    

# def v(string):
#     vStr = []
#     cStr = []
#     for i in range(1,len(string)+1):
#         for j in range(len(string)):
#             # print(string[j])
#             if string[j] in "AEIOUaeiou":
#                 temp = string[j:j+i]
#                 if len(temp) == i:
#                     vStr.append(temp)
#             else:
#                 temp = string[j:j+i]
#                 if len(temp) == i:
#                     cStr.append(temp)
#     return [len(cStr),len(vStr)]

# # different approach  

# # def v(string):
# #     score = [0,0]
# #     for i in range(len(string)):
# #         if string[i] in "AEIOU":
            


# # different approach 

# def minion_game(string):
#     # your code goes here
    

#     vStr = 0
#     cStr = 0
#     for i in range(1=,len(string)+1):
#         for j in range(len(string)):
#             # print(string[j])
#             if string[j] in "AEIOU":
#                 temp = string[j:j+i]
#                 if len(temp) == i:
#                     vStr += 1
#             else:
#                 temp = string[j:j+i]
#                 if len(temp) == i:
#                     cStr += 1
#     # print(l)
#     if cStr > vStr:
#         print("Stuart",cStr)
#     elif cStr < vStr:
#         print("Kevin",vStr)
#     else:
#         print("Draw")  
    


def minion_game(string):
    kevin = 0
    stuart = 0
    for i in range(len(string)):
        points = len(string) - i
        if string[i] in "AEIOU":
            kevin += points
        else:
            stuart += points
    if kevin > stuart:
        print("Kevin", kevin)
    elif kevin < stuart:
        print("Stuart", stuart)
    else:
        print("Draw")

n = input()
minion_game(n)