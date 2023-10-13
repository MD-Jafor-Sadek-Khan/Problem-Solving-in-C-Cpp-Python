n = int(input())
arrStr = input()


arr = arrStr.split() 

for i in range(0, len(arr)):
    arr[i] = int(arr[i])
    

arr.sort()
arr.reverse()
secondmax = 0
for i in range(0, len(arr)):
    if arr[i] != arr[0]:
        secondmax = arr[i]
        break
    
print(secondmax)
