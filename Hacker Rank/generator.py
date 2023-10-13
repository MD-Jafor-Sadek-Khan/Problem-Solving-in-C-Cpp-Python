def gen():
    for i in range(50000):
        yield i


for i in gen():
    print(i)


# l = [i for i in range(50000)]
# for i in l:
    
    
#     print(i)