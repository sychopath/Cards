#include<iostream>

using namespace std;

class Wallet
{
private:
    int amount;

public:
    Wallet(int amt = 0)
    {
        amount += amt;
    }

    void Recharge(int amt)
    {
        amount += amt;
    }
};
