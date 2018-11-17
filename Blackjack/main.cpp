#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Cards.h"

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
	rand(); // If using Visual Studio, discard first random value

    cout << "Hello user! Its time to play BlackJack" << '\n' << endl;
    Card *deck = getDeck();
    shuffleDeck(deck);
    // Output first 5 cards
    for(int i=0;i<5;++i)
        cout << "Here's card "<< i+1 <<": "
            << getRank(deck[i].ranks) << " of " << getSuit(deck[i].suit)
            << '\n';

    return 0;
}
