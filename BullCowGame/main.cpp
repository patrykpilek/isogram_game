#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuessAndPrintBack();

// the entry point for our application
int main()
{
	PrintIntro();
	GetGuessAndPrintBack();
	GetGuessAndPrintBack();

	cout << endl;
	return 0;
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

// get a guess from the player and repeat the guess back to them
string GetGuessAndPrintBack()
{
	string Guess = "";
	cout << "Enter your guess: ";
	getline(cin, Guess);
	cout << "Your guess was: " << Guess << endl;
	return Guess;
}
