#include <iostream>
#include <random> // for std::mt19937
#include <ctime> // for std::time
#include <string>

int randomNumber()
{
    // Initialize our mersenne twister with a random seed based on the clock
	std::mt19937 mersenne(static_cast<unsigned int>(std::time(nullptr)));

	// Create a reusable random number generator that generates uniform numbers between 1 and 100
	std::uniform_int_distribution<> die(1, 100);

	return die(mersenne);
}

void guessNumber(int number)
{
    // initialise turn counter
    int turn{1};
    do
        {
            std::cout << "Guess #" << turn << ": ";
        attempt:
            int guess;
            std::cin >> guess;
            // check guess is valid
            if (std::cin.fail()) // has a previous extraction failed?
            {
                // yep, so let's handle the failure
                std::cin.clear(); // put us back in 'normal' operation mode
                std::cin.ignore(32767, '\n'); // and remove the bad input
                std::cout << "Invalid input... Guess #" << turn << " again: ";
                goto attempt;
            }
            else
            {
                std::cin.ignore(32767, '\n'); // remove any extraneous input

                // compare guess to random number
                if (guess == number)
                    {
                        std::cout << "Congratulations you got it! You win!" << '\n';
                        break;
                    }
                else if (guess < number)
                    std::cout << "Too low!" << '\n';
                else if (guess > number)
                    std::cout << "Too high!" << '\n';
            }

        } while (++turn < 8);

        if (turn == 8)
            std::cout << "You have failed to guess the number! You lose!" << '\n';
}

int main()
{
    std::cout << "Hello user! Lets play a game...." << std::endl;
start:
    std::cout << "I'm thinking of a number, you have 7 guesses to get it right." << std::endl;
    // generate random number and start guessing
    guessNumber(randomNumber());
    // play again
    std::cout << "Do you want to play again? (y/n) :";
retry:
    std::string response;
    std::cin >> response;
    if (response == "y")
    {
        goto start;
    }
    else if (response == "n")
    {
        std::cout << "OK... Goodbye!";
    }
    else
    {
        std::cout << "Incorrect input, y or n please :";
        goto retry;
    }

    return 0;
}
