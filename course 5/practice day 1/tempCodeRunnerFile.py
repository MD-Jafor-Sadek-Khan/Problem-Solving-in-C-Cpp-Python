 print(
                    f"You cant take a loan beyound 2 times your current balance.\nYour Current Balance is {self.balance}tk\nYour eligibility for load is upto amount = {self.balance*2}tk"
                )
            else:
                transactionTime = datetime.datetime.now()
                transactionStatus = f"Took a Loan of {amount}tk on {transactionTime}"
                self.transactionHistory = transactionStatus
                self.bank.totalBalance -= amount
                self.bank.totalLoanAmount += amount
                print(
                    f"Heres your loan of {amount}tk. Happy Banking!! Better pay up in time..or else!!"
                )
        else:
            print(f"You can get a loan of upto {self.bank.totalBalance}")