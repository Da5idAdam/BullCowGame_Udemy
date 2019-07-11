#include "FBullCowGame.h"

FBullCowGame::FBullCowGame() { reset(); }

int FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }
bool FBullCowGame::GetIsGameWon() const { return false; }

void FBullCowGame::reset()
{
	constexpr int MAX_TRIES = 8;
	const int MyMaxTries = MAX_TRIES;

	int MyCurrentTry = 1;
	return;
}


bool FBullCowGame::CheckGuessValidity(std::string)
{
	return false;
}
