#include<iostream>

using namespace std;

class Board
{

public:
    int currentAmount;
    Board()
    {
        currentAmount = 0;
    }

    int Add(int amount)
    {
        currentAmount += amount;
    }
};