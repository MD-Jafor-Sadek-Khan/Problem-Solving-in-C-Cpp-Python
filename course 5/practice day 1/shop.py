class Store:
    
    def __init__(self,name) -> None:
        self.name=name
        self.all_products={}
    
    
        

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
        

    def add_products(self,name,price,quantity):
        product=Product(name,price,quantity)
        print(f'your id is={self.id}')
        print(f'product name {product.name} product price {product.price}  product quantity {product.quantity}')
        product.add_to_store(product,self.id)
        
    
    def __repr__(self) -> str:
        return f'your email= {self.email} || your id= {self.id}'
        
        
class Product(Store):
    def __init__(self, product_name, product_price, product_quantity) -> None:
        self.name = product_name
        self.price=product_price
        self.quantity=product_quantity
    def add_to_store(self,product,id):
        self.all_products[id]=[product]
        
        
        
kala=Store("kala")        
user=Seller("kala@kala.com",12345)
user3=Seller("dhola@gmail.com",12346)
user2=Seller("futabhai@futa.com",12348)

print(user)
print(user2)
print(user3)

user.add_products('malta',200,12)





print(kala.get_all_product())