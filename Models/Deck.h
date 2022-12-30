#include "Cards.h"
#include "Color.h"
#include<vector>

using namespace std;

class Deck
{
public:
    vector<Card> cards;

    void initialize()
    {
        for(int i=2;i<=14;i++)
        {
            cards.push_back(Card(i,Color::Spade));
            cards.push_back(Card(i,Color::Club));
            cards.push_back(Card(i,Color::Diamond));
            cards.push_back(Card(i,Color::Heart));
        }
        
    }

    Deck()
    {
        initialize();
    }
};