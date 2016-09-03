#include <iostream>
#include <string>

using namespace std;

int main()
{
	//introduce the game
	constexpr int WORLD_LENGHT = 5;

	cout << "Welcome to Bulls and Cows, a fun word game.\n";
	cout << "Can you guess the " << WORLD_LENGHT << " letter isogram I'm thinking off?\n";

	//get a guess from the player
	string Guess = "";
	cout << "Enter your guess: ";
	getline(cin, Guess);

	// repeat the guess back to them
	cout << "Your guess was: " << Guess << endl;

	cout << endl;
	return 0;
}