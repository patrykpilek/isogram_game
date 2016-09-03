#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();


// the entry point for our application
int main()
{
	PrintIntro();
	PlayGame();
	return 0; // exit the application
}

// introduce the game
void PrintIntro()
{
	constexpr int WORLD_LENGHT = 5;
	cout << "Welcome to Bulls and Cows, a fun word game.\n";
	cout << "Can you guess the " << WORLD_LENGHT << " letter isogram I'm thinking off?\n";
	cout << endl;
	return;
}

// loop for the number of turns asking for guesses
void PlayGame()
{
	constexpr int NUMBER_OF_TUNRS = 5;
	for (int i = 1; i <= NUMBER_OF_TUNRS; i++)
	{
		string Guess = GetGuess();
		cout << "Your guess was: " << Guess << endl;
		cout << endl;
	}
}

// get a guess from the player and repeat the guess back to them
string GetGuess()
{
	string Guess = "";
	cout << "Enter your guess: ";
	getline(cin, Guess);
	return Guess;
}