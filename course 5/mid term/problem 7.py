class Person:
    def __init__(self, name, age, height, weight) -> None:
        self.name = name
        self.age = age
        self.height = height
        self.weight = weight


class Cricketer(Person):
    def __init__(self, name, age, height, weight) -> None:
        super().__init__(name, age, height, weight)
        
    # overloading the ooperator Less Than "<"  
    def __lt__(self,other):
        if self.age < other.age:
            return True
        else:
            return False

Sakib = Cricketer('Sakib', 38, 68, 91)
Mushfiq = Cricketer('Mushfiq', 56, 55, 82)
Mustafiz = Cricketer('Mustafiz', 52, 69, 86)
Riyad = Cricketer('Riyad', 39, 72, 92)


# Printing the name and age of the youngest player using the overloaded operator

youngestPlayer_Age_And_Name=Cricketer("null",None,None,None)

youngestPlayer_Age_And_Name=Sakib
for i in listOfPlayers:
    if listOfPlayers[i]<youngestPlayer_Age_And_Name:
        youngestPlayer_Age_And_Name=listOfPlayers[i]

        
print(youngestPlayer_Age_And_Name.name)
