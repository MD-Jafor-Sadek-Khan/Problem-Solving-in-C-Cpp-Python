class Account:
    next_account_number = 1

    def __init__(self, balance=0):
        self.account_number = Account.next_account_number
        Account.next_account_number += 1
        self.balance = balance

    def deposit(self, amount):
        self.balance += amount

    def withdraw(self, amount):
        if self.balance >= amount:
            self.balance -= amount
        else:
            print(f"Not enough Money! Current Balance is: {self.balance}")

class SavingsAccount(Account):
    def __init__(self, balance=0, interest_rate=0.03):
        super().__init__(balance)
        self.interest_rate = interest_rate

    def apply_interest(self):
        self.balance += self.balance * self.interest_rate

class CurrentAccount(Account):
    def __init__(self, balance=0, overdraft_limit=1000):
        super().__init__(balance)
        self.overdraft_limit = overdraft_limit

    def withdraw(self, amount):
        if self.balance + self.overdraft_limit >= amount:
            self.balance -= amount
        else:
            print(f"Not enough Money! Current Balance is: {self.balance}")

class CombinedAccount(CurrentAccount, SavingsAccount):
    next_account_number = 1
    
    def __init__(self, savings_account, current_account):
        self.account_number = CombinedAccount.next_account_number
        CombinedAccount.next_account_number += 1
        self.savings_account = savings_account
        self.current_account = current_account

    def transfer_to_current(self, amount):
        self.savings_account.withdraw(amount)
        self.current_account.deposit(amount)

    def transfer_to_savings(self, amount):
        self.current_account.withdraw(amount)
        self.savings_account.deposit(amount)

    def apply_interest(self):
        self.savings_account.apply_interest()

    @property
    def unified_balance(self):
        return self.savings_account.balance + self.current_account.balance

savings_acc = SavingsAccount(1000, 0.02)
current_acc = CurrentAccount(500, 1000)

savings_acc.deposit(500)
savings_acc.apply_interest()
savings_acc.withdraw(5000)

current_acc.withdraw(700)
current_acc.withdraw(1000)

combined_acc = CombinedAccount(savings_acc, current_acc)

combined_acc.transfer_to_current(300)
combined_acc.transfer_to_savings(200)

combined_acc.apply_interest()

print(f"Savings Account ID: {savings_acc.account_number}")
print(f"Current Account ID: {current_acc.account_number}")
print(f"Combined Account ID: {combined_acc.account_number}")
print(f"Savings Account Balance: {savings_acc.balance}")
print(f"Current Account Balance: {current_acc.balance}")
print(f"Unified Balance: {combined_acc.unified_balance}")
