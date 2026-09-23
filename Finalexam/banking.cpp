#include <iostream>

class Digital_Wallet
{
protected:
    double Balance;
    int Reward_points;

public:
    Digital_Wallet()
    {
        Balance = 0;
        Reward_points = 0;
    }

    virtual void display(int id) = 0;
};


class Transaction : public Digital_Wallet
{
private:
    int id[5];
    double amount[5];
    int count;

public:
    Transaction()
    {
        count = 0;
    }

    void loadBalance(double money)
    {
        Balance = Balance + money;
    }

    void makePayment(int transaction_id, double money)
    {
        if (money > Balance)
        {
            std::cout << "Insufficient balance!\n";
            return;
        }

        Balance = Balance - money;

        if (money > 2000)
        {
            Reward_points = Reward_points + 50;
        }

        if (count < 5)
        {
            id[count] = transaction_id;
            amount[count] = money;
            count++;
        }
        else
        {
            for (int i = 0; i < 5; i++)
            {
                id[i] = id[i + 1];
                amount[i] = amount[i + 1];
            }

            id[5] = transaction_id;
            amount[5] = money;
        }

        if (Reward_points >= 1000)
        {
            Balance = Balance + 10;
            Reward_points = Reward_points - 1000;
        }
    }

    void display(int transaction_id)
    {
        for (int i = 0; i < count; i++)
        {
            if (id[i] == transaction_id)
            {
                std::cout << "\nTransaction ID = " << id[i] << "\n";
                std::cout << "Amount = " << amount[i] << "\n";
                std::cout << "Balance = " << Balance << "\n";
                std::cout << "Reward Points = "
                          << Reward_points << "\n";

                return;
            }
        }

        std::cout << "Transaction not found.\n";
    }

    void showWallet()
    {
        std::cout << "\nBalance = " << Balance << "\n";
        std::cout << "Reward Points = "
                  << Reward_points << "\n";
    }
};


int main()
{
    Transaction wallet;

    wallet.loadBalance(10000);

    wallet.makePayment(101, 1500);
    wallet.makePayment(102, 2500);
    wallet.makePayment(103, 3000);

    wallet.showWallet();

    // Runtime polymorphism
    Digital_Wallet *ptr = &wallet;

    ptr->display(102);

    return 0;
}