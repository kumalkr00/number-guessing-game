#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
 {
    std::srand(std::time(0));
    int secretNum = std::rand() % 100 + 1;

    int guessnumber;
    int attempt = 0;

    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "Try to guess the secret number between 1 and 100.\n";

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guessnumber;
        attempt++;

        if (guessnumber > secretNum)
		 {
           std::cout << "Too high! Try again.\n";
        }
		 else if (guessnumber < secretNum)
		 {
            std::cout << "Too low! Try again.\n";
        } 
		else 
		{
      std::cout << "Congratulations! You guessed the number in " << attempt << " attempt.\n";
        }

    } while (guessnumber != secretNum);

    return 0;
}
