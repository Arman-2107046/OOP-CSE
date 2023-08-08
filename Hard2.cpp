#include <iostream>
#include <string>

class BankAccount
{
private:
    int accountNumber;
    std::string accountHolderName;
    double accountBalance;

public:
    // Default constructor
    BankAccount() : accountNumber(0), accountHolderName("Unknown"), accountBalance(0.0) {}

    // Parameterized constructor
    BankAccount(int number, const std::string &name, double balance)
        : accountNumber(number), accountHolderName(name), accountBalance(balance) {}

    // Destructor
    ~BankAccount()
    {
        std::cout << "Account number " << accountNumber << " owned by " << accountHolderName << " is being closed.\n";
    }

    // Getters and setters (optional, not necessary for the given task)
    int getAccountNumber() const
    {
        return accountNumber;
    }

    std::string getAccountHolderName() const
    {
        return accountHolderName;
    }

    double getAccountBalance() const
    {
        return accountBalance;
    }

    void setAccountNumber(int number)
    {
        accountNumber = number;
    }

    void setAccountHolderName(const std::string &name)
    {
        accountHolderName = name;
    }

    void setAccountBalance(double balance)
    {
        accountBalance = balance;
    }
};

int main()
{
    // Creating BankAccount objects
    BankAccount account1(1001, "John Doe", 1000.0);
    BankAccount account2(2002, "Jane Smith", 5000.0);

    // Displaying account information
    std::cout << "Account Number: " << account1.getAccountNumber() << "\n";
    std::cout << "Account Holder Name: " << account1.getAccountHolderName() << "\n";
    std::cout << "Account Balance: $" << account1.getAccountBalance() << "\n";

    std::cout << "Account Number: " << account2.getAccountNumber() << "\n";
    std::cout << "Account Holder Name: " << account2.getAccountHolderName() << "\n";
    std::cout << "Account Balance: $" << account2.getAccountBalance() << "\n";

    return 0;
}
