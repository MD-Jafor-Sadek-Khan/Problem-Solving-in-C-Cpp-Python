class Store:
    all_products={}

class User:
    seller_id=1000
    customer_id=100
    def __init__(self,email,password) -> None:
        self.email=email
        self.password=password
        
    @classmethod    
    def get_seller_id(self):
        id=User.seller_id
        User.seller_id+=1
        return id
    @classmethod
    def get_customer_id(self):
        id=User.customer_id
        User.customer_id+=1
        return id
    

class Customer(User):
    def __init__(self, email, password) -> None:
        self.id=self.get_customer_id
        super().__init__(email, password)

    def see_products():
        pass

    def place_order():
        pass


class Seller(User):
    def __init__(self, email, password) -> None:
        self.id= self.get_seller_id()
        super().__init__(email, password)
        

    def add_product(self,name,price,quantity):
        product=Product(name,price,quantity)
        Store.all_products[self.id]=[product]
    
    def __repr__(self) -> str:
        return f'id= {self.id}'
        
        
class Product:
    def __init__(self, product_name, product_price, product_quantity) -> None:
        self.name = product_name
        self.price=product_price
        self.quantity=product_quantity
        
        
        
user=Seller("kala@kala.com",1234)
user3=Seller("kala@kala.com",1234)
user2=Seller("kala@kala.com",1234)

print(user)
print(user2)
print(user3)