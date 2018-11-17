#ifndef CARDS_H
#define CARDS_H

#include <string>

using namespace std;

struct Card
{
    int ranks;
    int suit;
};

enum Ranks
{
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING,
    ACE
};

enum Suits
{
    SPADES,
    CLUBS,
    DIAMONDS,
    HEARTS
};

class Cards
{
    public:
        Cards();
        virtual ~Cards();

    protected:

    private:
};

Card* getDeck();

string getRank(int ranks);

string getSuit(int suit);

void shuffleDeck(Card *deck);


#endif // CARDS_H
