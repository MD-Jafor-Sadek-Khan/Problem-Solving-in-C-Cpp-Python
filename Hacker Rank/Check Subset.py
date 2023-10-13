for i in range(0, int(input())):
    a = int(input())
    setA =  set(map(int , input().split()))
    
    b = int(input())
    setB =  set(map(int , input().split()))
        
    print(setA.issubset(setB) )