class Pen:
    
    def __init__(self, brand, price, name):
        self.brand = brand
        self.price = price
        self.name = name


matedor = Pen("matedor",5, "pin point")
cello = Pen("cello",15, "gel pen")

print(matedor.name)
print(cello.name)
