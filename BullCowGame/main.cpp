#include <iostream>
#include <string>
#include "FBullCowGame.h"

void PrintIntro();
void PlayGame();
bool AskToPlayAgain();
std::string GetGuess();

FBullCowGame BCGame; // instantiate a new game

// the entry point for our application
int main()
{
	std::cout << BCGame.GetCurrentTry();

	bool bPlayAgain = false;
	do {
		PrintIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();
	} while (bPlayAgain);

	return 0; // exit the application
}

// introduce the game
void PrintIntro()
{
	constexpr int WORD_LENGHT = 5;
	std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
	std::cout << "Can you guess the " << WORD_LENGHT << " letter isogram I'm thinking off?\n";
	std::cout << std::endl;
	return;
}

void PlayGame()
{
	BCGame.Reset();
	int MaxTries = BCGame.GetMaxTries();

	// loop for the number of turns asking for guesses
	// TODO change from FOR to WHILE loop once we are validating tries
	for (int i = 1; i <= MaxTries; i++)
	{
		std::string Guess = GetGuess(); // TODO make loop checking valid

		// submit valid guess to the game
		// print number of bulls and cows

		std::cout << "Your guess was: " << Guess << std::endl;
		std::cout << std::endl;
	}

	// TODO summarise game
}

// get a guess from the player and repeat the guess back to them
std::string GetGuess()
{
	std::string Guess = "";
	int CurrentTry = BCGame.GetCurrentTry();
	std::cout << "Try " << CurrentTry << ". Enter your guess: ";
	std::getline(std::cin, Guess);
	return Guess;
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again (y/n)? ";
	std::string Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'y' || Response[0] == 'Y');
}