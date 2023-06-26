"""'
Bank will be the parent class
user and admin will inherit from bank

User

-Can create an account. --> DONE
-Can deposit and withdrawal amount. --> DONE
-Can check available balance. --> DONE
-Can transfer the amount from his account to another user account. --> DONE
-Can check transaction history. --> DONE
-Can take a loan from the bank twice of his total amount.. --> DONE


Admin 

-Can create an account  --> DONE
-Can check the total available balance of the bank. --> DONE
-Can check the total loan amount.  --> DONE
-Can on or off the loan feature of the bank. ---> DONE


special notes:

Note 
-User can only withdraw and transfer money from his account if he has money in his account. ---> DONE
-If a user is unable to withdraw the amount of money he has deposited in the bank, he will get a message that the bank is bankrupt. ---> DONE

"""


# import section

import datetime


# common classes


class Bank:
    totalBalance = 0
    totalLoanAmount = 0

    def __init__(self, name) -> None:
        self.name = name
        self.loanFeatureToggle = True

    # @property
    # def loanAllowenceToggle(self):
    #     return self.bank.loanFeatureToggle

    # @loanAllowenceToggle.setter
    # def loanAllowenceToggle(self, value):
    #     self.bank.loanFeatureToggle = value

    def toggleLoanFeature(self, value):
        self.loanFeatureToggle = value


# Child classes


class User(Bank):
    def __init__(self, name, email, password, bank) -> None:
        self.email = email
        self.password = password
        self.bank = bank
        self.balance = 0
        self.transactionHistoryList = []
        super().__init__(name)

    @property
    def getBalance(self):
        print(f"{self.name} Your current Balance is = {self.balance}tk")

    def transferAmount(self, amount, accountID):
        if amount > 0 and amount <= self.balance:
            transactionTime = datetime.datetime.now()
            transactionStatus = f'Transfered an amount of {amount}tk to user "{accountID.name}" on {transactionTime}'
            self.transactionHistory = transactionStatus
            accountID.balance += amount
            self.balance -= amount
        else:
            if amount < 0:
                print(f"transfer amount cant be Negative")
            else:
                print(f"Insufficient Funds")

    def getLoan(self, amount):
        if self.bank.loanFeatureToggle:
            if amount <= self.bank.totalBalance:
                if amount > self.balance * 2:
                    print(
                        f"You cant take a loan beyound 2 times your current balance.\nYour Current Balance is {self.balance}tk\nYour eligibility for load is upto amount = {self.balance*2}tk"
                    )
                else:
                    transactionTime = datetime.datetime.now()
                    transactionStatus = (
                        f"Took a Loan of {amount}tk on {transactionTime}"
                    )
                    self.transactionHistory = transactionStatus
                    self.bank.totalBalance -= amount
                    self.bank.totalLoanAmount += amount
                    print(
                        f"Heres your loan of {amount}tk. Happy Banking!! Better pay up in time..or else!!"
                    )
            else:
                print(
                    f"Sorry! currently You can get a loan of upto {self.bank.totalBalance} due to the bank having insufficient funds"
                )
        else:
            print(f"Currently {self.bank.name} Bank isnt issuing any loans.Thank you")

    @property
    def transactionHistory(self):
        print(f"\n\n Your Transaction History in {self.bank.name} Bank \n\n")
        for i in self.transactionHistoryList:
            print(i)
        print(f"\n\n**************************************************\n\n")
        return ""

    @transactionHistory.setter
    def transactionHistory(self, value):
        self.transactionHistoryList.append(value)

    def deposite(self, amount):
        if amount > 0:
            self.balance += amount
            transactionTime = datetime.datetime.now()
            transactionStatus = f"Deposited {amount}tk on {transactionTime}"
            self.transactionHistory = transactionStatus
            self.bank.totalBalance += amount
            print(f"successfully deposited {amount} in your account")
        else:
            print(f"The amount cant be negative")

    def widraw(self, amount):
        if amount <= self.bank.totalBalance:
            if amount > 0 and amount <= self.balance:
                self.balance -= amount
                transactionTime = datetime.datetime.now()
                transactionStatus = f"Widrawed {amount}tk on {transactionTime}"
                self.transactionHistory = transactionStatus
                self.bank.totalBalance -= amount

                print(f"widraw successful you got {amount}")
            else:
                if amount < 0:
                    print(f"Widraw amount cant be negative")
                else:
                    print(f"Not enough money")
        else:
            # print(f'You can get a loan of upto {self.bank.totalBalance}')
            print(f"The Bank is bankrupt")


class Admin(Bank):
    def __init__(self, name, email, password, bank) -> None:
        self.email = email
        self.password = password
        self.bank = bank
        super().__init__(name)

    def LoanFeatureToggle(self, value):
        self.bank.toggleLoanFeature(value)

    # def Turn_On_Or_Off_Loan_Feature(self,value):
    #     self.bank.loanAllowenceToggle(value)

    @property
    def getBanksTotalBalance(self):
        total = self.bank.totalBalance
        print(f"{self.bank.name} Banks total Balance is = {total}")

    def __repr__(self) -> str:
        return f"admin-name = {self.name} \nadmin-email= {self.email} \nadmin-password = {self.password}\n admin-bank-name={self.bank.name}"

    @property
    def getTotalLoanAmount(self):
        total = self.bank.totalLoanAmount
        print(f"{self.bank.name} Banks total Loan Amount is {total}")


# testing Phase

dbbl = Bank("dbbl")
dbbluser1 = User("kala", "kala@bazar.com", 12345, dbbl)
print(dbbluser1.balance)
dbbluser1.transactionHistory
dbbluser1.deposite(500)
dbbluser1.getBalance
dbbluser1.deposite(500)
dbbluser1.getBalance
dbbluser1.transactionHistory
dbbluser1.widraw(200)
dbbluser1.getBalance
dbbluser1.widraw(900)
dbbluser1.getBalance
dbbluser1.transactionHistory
dbbluser1.getLoan(500)

user2 = User("ami manush", "dhola@gmail.com", 12345, dbbl)
user2.deposite(1000)
user2.getBalance
dbbluser1.getBalance

dbbluser1.transferAmount(200, user2)

dbbluser1.getBalance

user2.getBalance

brack = Bank("brack")


dbblAdmin1 = Admin("kuku", "alu@jira.com", 123333, dbbl)

# print(dbblAdmin1)

dbblAdmin1.getBanksTotalBalance
# print(dbbl.totalBalance)
# print(issubclass(Admin,Bank))

brackUser1 = User("sakib", "sakib@gmail.com", 1964, brack)

brackUser1.deposite(1000000)

brackAdmin1 = Admin("motor shuti", "shutki@vorta.com", 6545, brack)

brackAdmin1.getBanksTotalBalance

brackUser1.getLoan(2000000)
brackAdmin1.getBanksTotalBalance

brackUser2 = User("aj", "aj@ajaynagar.com", 215465, brack)
brackUser2.deposite(12000)
brackUser2.getBalance

brackUser1.getLoan(1000012)

brackAdmin1.getBanksTotalBalance

brackUser2.widraw(12000)

brackAdmin1.getTotalLoanAmount

dbblAdmin1.getTotalLoanAmount

dbbluser1.getLoan(50)
dbblAdmin1.getTotalLoanAmount

dbbluser1.transactionHistory

dbbluser2 = User("hum", "u", 12, dbbl)

dbbluser2.deposite(1200)
dbbluser2.getLoan(100)
dbbluser2.getLoan(200)
dbblAdmin1.LoanFeatureToggle(False)
dbbluser2.getLoan(400)
dbbluser2.getLoan(800)
dbbluser2.getBalance
dbbluser2.widraw(1200)
brackUser1.getLoan(2)
dbbluser2.transactionHistory
dbblAdmin1.getTotalLoanAmount
dbblAdmin1.getBanksTotalBalance
dbbluser1.getBalance
dbbluser1.getLoan(1)
brackUser1.getBalance
brackUser1.getLoan(10)

dbblAdmin1.getBanksTotalBalance
brackAdmin1.getBanksTotalBalance