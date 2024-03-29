#pragma once
#include <string>

using FString = std::string;
using int32 = int;

// all variables initialized to zero
struct FBullCowCount
{
	int32 Bulls = 0;
	int32 Cows = 0;
};


class FBullCowGame {
public:
	FBullCowGame();
	void reset(); //TODO: make a more rich return value
	int32 GetMaxTries() const;
	int32 GetCurrentTry() const;
	bool GetIsGameWon() const;
	bool CheckGuessValidity(FString);

	// Counts bulls and cows, and increases try # assuming valid guess
	FBullCowCount SubmitGuess(FString);

private:
	int32 MyMaxTries = 5;
	int32 MyCurrentTry = 1;
	FString MyHiddenWord;
};