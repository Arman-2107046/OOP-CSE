#include <iostream>
#include <string>

class Bank {
private:
    std::string bankName;
    int numOfBranches;

public:
    // Default constructor
    Bank() : bankName("Unknown Bank"), numOfBranches(0) {}

    // Parameterized constructor
    Bank(std::string name, int branches) : bankName(name), numOfBranches(branches) {}

    // Destructor
    ~Bank() {
        std::cout << "Bank " << bankName << " is being destroyed.\n";
    }

    // Friend function to compare the number of branches of two Bank objects
    friend bool compareBranches(const Bank& bank1, const Bank& bank2) {
        return bank1.numOfBranches < bank2.numOfBranches;
    }

    // Getters and setters (optional, not necessary for the given task)
    std::string getBankName() const {
        return bankName;
    }

    int getNumOfBranches() const {
        return numOfBranches;
    }

    void setBankName(const std::string& name) {
        bankName = name;
    }

    void setNumOfBranches(int branches) {
        numOfBranches = branches;
    }
};

int main() {
    // Creating Bank objects
    Bank bank1("ABC Bank", 10);
    Bank bank2("XYZ Bank", 5);

    // Using the friend function to compare the number of branches
    if (compareBranches(bank1, bank2)) {
        std::cout << bank1.getBankName() << " has fewer branches than " << bank2.getBankName() << ".\n";
    } else {
        std::cout << bank2.getBankName() << " has fewer branches than " << bank1.getBankName() << ".\n";
    }

    return 0;
}
