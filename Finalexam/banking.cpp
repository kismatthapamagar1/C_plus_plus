#include <iostream>
#include <string>

class Digital_wallet
{
protected:
    double Balance;
    int Reward_points;

public:
    Digital_wallet()
    {
        Balance = 0;
        Reward_points = 0;
    }

    virtual void LoadBalance() = 0;
    virtual void MakePayment() = 0;
    virtual void PaymentHistory() = 0;
    virtual void DisplayTransaction(int id) = 0;

    virtual ~Digital_wallet()
    {
    }
};


class Transaction : public Digital_wallet
{
private:
    int transaction_ID[5];
    double amount[5];
    std::string type[5];

    static int count;

public:

    void LoadBalance()
    {
        double money;

        std::cout << "Enter amount to load: ";
        std::cin >> money;

        if (money > 0)
        {
            Balance = Balance + money;

            transaction_ID[count] = count + 1;
            amount[count] = money;
            type[count] = "Load Balance";

            count++;

            std::cout << "Balance loaded successfully.\n";
            std::cout << "Current Balance = "
                      << Balance << std::endl;
        }
        else
        {
            std::cout << "Invalid amount.\n";
        }
    }


    void MakePayment()
    {
        double money;

        std::cout << "Enter payment amount: ";
        std::cin >> money;

        if (money <= Balance && money > 0)
        {
            Balance = Balance - money;

            // Payment greater than 2000 earns 50 points
            if (money > 2000)
            {
                Reward_points = Reward_points + 50;
            }

            // Every 1000 points gives 10 balance
            if (Reward_points >= 1000)
            {
                Balance = Balance + 10;
                Reward_points = Reward_points - 1000;
            }

            transaction_ID[count] = count + 1;
            amount[count] = money;
            type[count] = "Payment";

            count++;

            std::cout << "Payment successful.\n";
            std::cout << "Current Balance = "
                      << Balance << std::endl;

            std::cout << "Reward Points = "
                      << Reward_points << std::endl;
        }
        else
        {
            std::cout << "Insufficient balance or invalid amount.\n";
        }
    }


    void PaymentHistory()
    {
        std::cout << "\n----- Payment History -----\n";

        for (int i = 0; i < count; i++)
        {
            std::cout << "Transaction ID: "
                      << transaction_ID[i] << std::endl;

            std::cout << "Amount: "
                      << amount[i] << std::endl;

            std::cout << "Type: "
                      << type[i] << std::endl;

            std::cout << "---------------------------\n";
        }
    }


    void DisplayTransaction(int id)
    {
        for (int i = 0; i < count; i++)
        {
            if (transaction_ID[i] == id)
            {
                std::cout << "\n----- Transaction Details -----\n";

                std::cout << "Transaction ID: "
                          << transaction_ID[i] << std::endl;

                std::cout << "Amount: "
                          << amount[i] << std::endl;

                std::cout << "Type: "
                          << type[i] << std::endl;

                return;
            }
        }

        std::cout << "Transaction not found.\n";
    }
};


int Transaction::count = 0;


int main()
{
    Transaction obj;

    Digital_wallet *wallet = &obj;

    wallet->LoadBalance();

    wallet->MakePayment();

    wallet->PaymentHistory();

    int id;

    std::cout << "\nEnter Transaction ID to search: ";
    std::cin >> id;

    wallet->DisplayTransaction(id);

    return 0;
}