# #Code
# try:
#     print (1/0)
# except ZeroDivisionError as e:
#     print ("Error Code:",e,"kala hain tu")


for _ in range(int(input())):
    l = list(map(str, input().split()))
    try:
        print(int(l[0])//int(l[1]))
    except ValueError as e:
        print("Error Code:",e)
    except ZeroDivisionError as e:
        print("Error Code:",e)
        
        
