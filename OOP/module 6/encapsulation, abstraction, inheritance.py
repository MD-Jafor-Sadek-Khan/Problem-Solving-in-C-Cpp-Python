from abc import ABC, abstractmethod

class Animal(ABC):
    def __init__(self, name, age, type):
      self.name = name
      self.age = age
      self.type = type
      self.__wife = []
    @abstractmethod
    def hunt(self):
        return f"could or could not"
    @abstractmethod
    def typeOfFood(self):
        return f"Specific food group"
    
    def get_wife_details(self):
     return f"my wife is {self.__wife}"
    
    def set_wife(self, newWife):
        self.__wife =  newWife
        return f"my new wifes details is {self.__wife}"
    

class Monkey(Animal):
    
    def __init__(self, name, age, type, gender, food):
        super().__init__(name, age, type)
        self.gender = gender
        self.food = food
        
    def typeOfFood(food):
        return f"I eat only {food}'s"
    
    def hunt(self):
        return f"I dont hunt"

    def __repr__(self) -> str:
        return f" name {self.name} \n age {self.age} \n type {self.type} \n gender {self.gender} \n food {self.food}"
    
class Golden_Angwantibo(Monkey):
    def __init__(self, name, age, type, gender, food, home, children):
        super().__init__(name, age, type, gender, food)
        self.home = home
        self.children = children
    
    def __repr__(self) -> str:
        return f" name {self.name} \n age {self.age} \n type {self.type} \n gender {self.gender} \n food {self.food} \n home {self.home} \n children {self.children}"

kali = Golden_Angwantibo("kali", 5, "Carnivorous", "Female", "Parrot", "Amazon", 2)

# print(kali)

kalu = Monkey("kalu", 25, "Carnivorous/vegen", "Non-Binary", "Soyabeans")
print(kalu)

kalu.set_wife(kali)

print(kalu.get_wife_details())