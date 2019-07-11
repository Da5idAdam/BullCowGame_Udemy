#pragma once
#include <string>

class FBullCowGame {
public:
	void reset(); //TODO: make a more rich return value
	int GetMaxTries() const;
	int GetCurrentTry() const;
	bool GetIsGameWon() const;
	bool CheckGuessValidity(std::string);


private:
	int MyMaxTries = 5;
	int MyCurrentTry = 1;
};