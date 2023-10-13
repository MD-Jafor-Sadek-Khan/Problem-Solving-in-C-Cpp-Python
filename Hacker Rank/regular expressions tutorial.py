import re
s = 'John has 6 cats but I think my friend Susan has 3 dogs and Mike has 8 fishes'
print(m:=re.search(  '(?P<kala>([A-Za-z]+) \w+ (\d+) (\w+))', s))
print(n:= re.findall('([A-Za-z]+) \w+ (\d+) (\w+)', s))
print("kala",m.group("kala"),m.groupdict())
print(nul:= list(zip(*n)))



