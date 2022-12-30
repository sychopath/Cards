#include<iostream>
#include "User.h"
#include "Board.h"
#include <Rpc.h>
#include<vector>

class Round
{
private:

    vector<User> users;
    UUID RoundID;

public:
    Board b;

    Round(vector<User> u)
    {
        UuidCreate(&RoundID);
        users = u;
        b.currentAmount = 0;
    }
};
