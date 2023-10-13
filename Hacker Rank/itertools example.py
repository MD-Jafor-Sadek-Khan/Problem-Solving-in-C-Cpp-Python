from itertools import *

# Repeat the number 5 three times
# numbers = count(5, 3)

# for num in numbers:
#     print(num)
# print(next(numbers))
# print(next(numbers))
# print(next(numbers))
# for i in range(5):
#     print(next(numbers))


l1 = [1,2,3]
l2 = [4,5,6]
c = 0
for i in combinations(chain(l1,l2), [c for i in range(5)]):
    print(i)