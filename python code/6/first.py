class Account:
    def __init__(self, account_number, account_holder, balance=0):
        self._account_number = account_number
        self._account_holder = account_holder
        self._balance = balance

   
    @property
    def account_number(self):
        return self._account_number

    
    @property
    def account_holder(self):
        return self._account_holder


    @property
    def balance(self):
        return self._balance

    
    def show_balance(self):
        return f"Account Balance: ${self._balance}"

    def withdraw(self, amount):
        if amount <= 0:
            return "Invalid withdrawal amount."
        if amount > self._balance:
            return "Insufficient funds."
        self._balance -= amount
        return f"Withdrawal successful. Remaining balance: ${self._balance}"

    
    def deposit(self, amount):
        if amount <= 0:
            return "Invalid deposit amount."
        self._balance += amount
        return f"Deposit successful. Updated balance: ${self._balance}"

    
    def transfer(self, destination_account, amount):
        if amount <= 0:
            return "Invalid transfer amount."
        if amount > self._balance:
            return "Insufficient funds for the transfer."
        self._balance -= amount
        destination_account.deposit(amount)
        return f"Transfer successful. Remaining balance: ${self._balance}"

account1 = Account("12345", "Alice", 1000)
account2 = Account("54321", "Bob", 500)

print(account1.show_balance())  

print(account1.withdraw(500)) 

print(account1.deposit(200))  

print(account1.transfer(account2, 300))   
print(account2.show_balance())  


print(account1.transfer(account2, 1000))  

print(account2.deposit(-200))   


print(account1.withdraw(-50))   