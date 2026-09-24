#include <iostream>
#include <string>

class Account
{
protected:
    std::string customer_name;
    int account_number;
    std::string account_type;
    double balance;

public:

    Account(std::string name, int number, std::string type)
    {
        customer_name = name;
        account_number = number;
        account_type = type;
        balance = 0;
    }

    void Deposit()
    {
        double amount;

        std::cout << "Enter deposit amount: ";
        std::cin >> amount;

        balance = balance + amount;

        std::cout << "Amount deposited successfully.\n";
    }

    void DisplayBalance()
    {
        std::cout << "\nCustomer Name : "
                  << customer_name << std::endl;

        std::cout << "Account Number: "
                  << account_number << std::endl;

        std::cout << "Account Type  : "
                  << account_type << std::endl;

        std::cout << "Balance       : "
                  << balance << std::endl;
    }

    ~Account()
    {
    }
};


class Saving_account : public Account
{
private:
    double interest_rate;

public:

    Saving_account(std::string name, int number)
        : Account(name, number, "Saving Account")
    {
        interest_rate = 5;
    }

    void ComputeInterest()
    {
        double interest;

        interest = balance * interest_rate / 100;

        balance = balance + interest;

        std::cout << "Interest = "
                  << interest << std::endl;

        std::cout << "Balance after interest = "
                  << balance << std::endl;
    }

    ~Saving_account()
    {
    }
};


class Current_account : public Account
{
public:

    Current_account(std::string name, int number)
        : Account(name, number, "Current Account")
    {
    }

    void Withdraw()
    {
        double amount;

        std::cout << "Enter withdrawal amount: ";
        std::cin >> amount;

        if (amount <= balance)
        {
            balance = balance - amount;

            std::cout << "Amount withdrawn successfully.\n";
            std::cout << "Remaining Balance = "
                      << balance << std::endl;
        }
        else
        {
            std::cout << "Insufficient balance.\n";
        }
    }

    ~Current_account()
    {
    }
};


int main()
{
    Saving_account saving("Kismat", 101);

    saving.Deposit();
    saving.DisplayBalance();
    saving.ComputeInterest();

    std::cout << "\n----------------------\n";

    Current_account current("Ram", 102);

    current.Deposit();
    current.DisplayBalance();
    current.Withdraw();
    current.DisplayBalance();

    return 0;
}