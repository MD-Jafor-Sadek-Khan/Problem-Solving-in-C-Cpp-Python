
from itertools import compress

def is_vowel(char):
    vowels = 'aeiou'
    return char.lower() in vowels

data = ['a', 'b', 'c', 'd', 'e', 'f']

# Using a function as the selector argument
result = compress(data, map(is_vowel, data))

for item in result:
    print(item)


from collections import Counter

l = [1, 1, 2, 2, 3, 3, 4, 4, 5]

counter = Counter(l)
unique_items = [item for item, count in counter.items() if count == 1]

print(unique_items)
