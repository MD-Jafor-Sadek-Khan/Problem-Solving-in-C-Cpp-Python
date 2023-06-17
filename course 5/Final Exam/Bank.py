class User:
    last_account_number = 0

    def __init__(self, name, initial_deposit):
        User.last_account_number += 1
        self.account_number = User.last_account_number
        self.name = name
        self.balance = initial_deposit
        self.transaction_history = []

    def deposit(self, amount):
        self.balance += amount
        self.transaction_history.append(f"Deposit: +{amount}")

    def withdraw(self, amount):
        if self.balance >= amount:
            self.balance -= amount
            self.transaction_history.append(f"Withdrawal: -{amount}")
        else:
            print("Insufficient funds. Unable to withdraw.")

    def check_balance(self):
        return self.balance

    def transfer(self, recipient, amount):
        if self.balance >= amount:
            self.balance -= amount
            recipient.balance += amount
            self.transaction_history.append(f"Transfer: -{amount} to {recipient.account_number}")
            recipient.transaction_history.append(f"Transfer: +{amount} from {self.account_number}")
        else:
            print("Insufficient funds. Unable to transfer.")

    def check_transaction_history(self):
        return self.transaction_history

    def request_loan(self):
        loan_amount = self.balance * 2
        self.balance += loan_amount
        self.transaction_history.append(f"Loan: +{loan_amount}")

class Admin:
    def __init__(self):
        self.total_balance = 0
        self.total_loan_amount = 0
        self.loan_feature_enabled = True

    def create_account(self, name, account_number, initial_deposit):
        user = User(name, account_number, initial_deposit)
        self.total_balance += initial_deposit
        return user

    def check_total_balance(self):
        return self.total_balance

    def check_total_loan_amount(self):
        return self.total_loan_amount

    def enable_loan_feature(self):
        self.loan_feature_enabled = True

    def disable_loan_feature(self):
        self.loan_feature_enabled = False


# Example usage:

admin = Admin()

# Create user accounts
user1=User("Kala manik",5000 )
user2=User("dhola mia",10000)

user1.deposit(2000)
user2.withdraw(200)
print(user1.balance, user2.balance, user1.account_number,user2.account_number)

user2.transfer(1,200)
print(user1.balance)


