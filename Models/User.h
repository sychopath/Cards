#include<iostream>
#include "Wallet.h"
#include <Rpc.h>

using namespace std;

class User
{
private:
    string Name;
    UUID UserID;
    string phoneNumber;
    
public:
    Wallet wallet; 
    
    User(string name, string phno) : Name(name),phoneNumber(phno)
    {
        UuidCreate(&UserID);
    }



};