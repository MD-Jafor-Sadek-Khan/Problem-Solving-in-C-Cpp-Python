class Calculator:
    brand = "Casio 94651"

    def add(self, *args):
        x = 0
        for i in args:
            x = x + i
        return x

    def subtract(self, x, y):
        j = x - y
        return j

    def multiply(self, *args):
        x = 1
        for i in args:
            x = x * i
        return x

    def divide(self, x, y):
        j = x // y
        return j


my_calculator = Calculator()

print(my_calculator.add(1, 2, 3, 4, 5))
print(    my_calculator.subtract(1, 2))
print(my_calculator.multiply(1, 2))
print(my_calculator.divide(10, 2))
