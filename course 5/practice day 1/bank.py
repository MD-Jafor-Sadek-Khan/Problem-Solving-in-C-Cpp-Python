class Bank:
    def __init__(self,balance) -> None:
        self.balance=balance
        self.min_amount=100
        self.max_amount=100000
        
    def widraw(self,amount):
        if amount> self.balance:
            print(f'balance insufficient')
        
        elif amount> self.max_amount:
            print(f'bank fokir hoe jabe')
        elif amount< self.min_amount:
            print(f'fokira aro lagbo tola')
        else:
            self.balance-=amount
            print(f'here is your money {amount} \n your remaining balance is {self.balance}')

    def deposite(self,amount):
        if amount<0:
            print(f'sagol!! u entered a negative amount')
        else:
            self.balance+=amount
            print(f'your new balance is {self.balance}')
            
user1=Bank(10000)

user1.deposite(10)
