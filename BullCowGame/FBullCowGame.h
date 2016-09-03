#pragma once
#include <string>

class FBullCowGame {
public:
	FBullCowGame(); // constructor
	void Reset(); // TODO make a more rich return value.
	int GetMaxTries() const;
	int GetCurrentTry() const;
	bool isGameWon() const;
	bool CheckGuessValidity(std::string); // TODO make a more rich return value.

// ^^ Please try and ignore this and focus on the interface above ^^
private:
	// see constructor for initialisation
	int MyCurrentTry;
	int MyMaxTries;
};