#include <string>
#include <cstdlib>
#include "Cards.h"

using namespace std;

Cards::Cards()
{
    //ctor
}

Cards::~Cards()
{
    //dtor
}

Card* getDeck()
{
    Card *deck = new Card[52];
    int counter(0);
    for(int i=0;i <= Suits::HEARTS; ++i)
        {
        for(int j=0;j <= Ranks::ACE; ++j)
            {
                deck[counter] = {j,i};
                ++counter;
            }
        }
    return deck;
}

string getRank(int ranks)
{
    string output;
    switch(ranks)
    {
        case Ranks::TWO:
            output = "Two";
            break;
        case Ranks::THREE:
            output = "Three";
            break;
        case Ranks::FOUR:
            output = "Four";
            break;
        case Ranks::FIVE:
            output = "Five";
            break;
        case Ranks::SIX:
            output = "Six";
            break;
        case Ranks::SEVEN:
            output = "Seven";
            break;
        case Ranks::EIGHT:
            output = "Eight";
            break;
        case Ranks::NINE:
            output = "Nine";
            break;
        case Ranks::TEN:
            output = "Ten";
            break;
        case Ranks::JACK:
            output = "Jack";
            break;
        case Ranks::QUEEN:
            output = "Queen";
            break;
        case Ranks::KING:
            output = "King";
            break;
        case Ranks::ACE:
            output = "Ace";
    }
    return output;
}

string getSuit(int suit)
{
    string output;
    switch(suit)
    {
        case Suits::SPADES:
            output = "Spades";
            break;
        case Suits::CLUBS:
            output = "Clubs";
            break;
        case Suits::DIAMONDS:
            output = "Diamonds";
            break;
        case Suits::HEARTS:
            output = "Hearts";
    }
    return output;
}

void swapCard(Card &a, Card &b)
{
	Card temp = a;
	a = b;
	b = temp;
}

// Generate a random number between min and max (inclusive)
// Assumes srand() has already been called
int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // static used for efficiency, so we only calculate this value once
 	// evenly distribute the random number across our range
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

void shuffleDeck(Card* deck)
{
    	// Step through each card in the deck
	for (int index = 0; index < 52; ++index)
	{
		// Pick a random card, any card
		int swapIndex = getRandomNumber(0, 51);
		// Swap it with the current card
		swapCard(deck[index], deck[swapIndex]);
	}
}
