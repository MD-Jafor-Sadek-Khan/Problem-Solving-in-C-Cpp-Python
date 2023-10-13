from datetime import datetime

class Product():
    __current_product_id = 1
    def __init__(self, name, quantity, price, details) -> None:
        self.name = name
        self.id = Product.__current_product_id
        Product.__current_product_id += 1
        self.details = details
        self.quantity = quantity
        self.price = price
    
    def __repr__(self) -> str:
         return f'Name: {self.name}\nID: {self.id}\nQuantity: {self.quantity}\nPrice: {self.price}\nDetails: {self.details}'

class Shop():
    __current_id = 1
    def __init__(self, name, address) -> None:
        self.name = name
        self.id = Shop.__current_id
        Shop.__current_id += 1
        self.create_date = datetime.now().strftime("%Y-%m-%d %H:%M:%S")
        self.address = address
        self.__products = []
    
    def add_product(self, product):
        self.__products.append(product) 
    
    def get_products(self):
        return f"{self.__products}"
    
    def buyProduct(self, product, quantity, money):
        for i in range(len(self.__products)):
            if product == self.__products[i].name:
                price = self.__products[i].price * quantity
                if self.__products[i].quantity >= quantity:
                    if money >= price:
                        self.__products[i].quantity -= quantity
                        change = money - price
                        return f"Here is {quantity} {self.__products[i].name}.\nHere is your Change: {change}tk"
                    else:
                        return f"Not Enough Money. The total is {price}tk.\nYou need {price - money}tk more."
                else:
                    return f"The given quantity exceeds the current stock. \n{self.__products[i].quantity} {product} are available right now!!!"
            else:
                return f"{product} is not on store"
                     
        
    


orange = Shop("Orange","Dhanmondi") 

shoe = Product("shoe", 2, 200, "Addidas white shoe")
jeans = Product("pants", 5, 100, "Levise Rough Jeans")

orange.add_product(shoe)
orange.add_product(jeans)

# print(orange.get_products())
print(orange.buyProduct("shoe",2, 400))


