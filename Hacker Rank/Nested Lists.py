n = int(input())

arr = []
arr2 = []

for i in range(0,n):
    name = input()
    mark = float(input())
    arr2.append(mark)
    arr.append([name,mark])

arr2.sort()

secondmax = 0
for i in range(0, len(arr2)):

    if arr2[i] != arr2[0]:
        secondmax = arr2[i]
        break



finalistName = []
for i in range(0, len(arr)):
    if arr[i][1] == secondmax:
        finalistName.append(arr[i][0])
        
finalistName.sort()


for i in finalistName:
    print(i)    




    