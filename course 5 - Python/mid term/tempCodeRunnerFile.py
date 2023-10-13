class Person:
    def __init__(self, name, age, height, weight):
        self.name = name
        self.age = age
        self.height = height
        self.weight = weight


class Cricketer(Person):
    def __init__(self, name, age, height, weight):
        super().__init__(name, age, height, weight)

    # Overloading the less than operator "<"
    def __lt__(self, other):
        if self.age < other.age:
            return True
        else:
            return False


Sakib = Cricketer('Sakib', 380, 68, 91)
Mushfiq = Cricketer('Mushfiq', 356, 55, 82)
Mustafiz = Cricketer('Mustafiz', 207, 69, 86)
Riyad = Cricketer('Riyad', 3900, 72, 92)

# Using the overloaded operaotr to find the youngest player
listOfPlayers = [Sakib, Mushfiq, Mustafiz, Riyad]
youngestPlayer = listOfPlayers[0]
for player in listOfPlayers[1:]:
    if player < youngestPlayer:
        youngestPlayer = player

# Printing the name and age of the youngest player
print(f"The youngest player's age is {youngestPlayer.age}\nHis name is {youngestPlayer.name}")
