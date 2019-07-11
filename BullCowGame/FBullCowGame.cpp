#include "FBullCowGame.h"

using FString = std::string;

FBullCowGame::FBullCowGame() { reset(); }

int FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }
bool FBullCowGame::GetIsGameWon() const { return false; }

void FBullCowGame::reset()
{
	constexpr int MAX_TRIES = 8;
	const FString HIDDEN_WORD = "Planet";
	MyHiddenWord = HIDDEN_WORD;

	const int MyMaxTries = MAX_TRIES;

	int MyCurrentTry = 1;
	return;
}


bool FBullCowGame::CheckGuessValidity(FString)
{
	return false;
}
// Receives a valid guess, increments turn and returns count 
FBullCowCount FBullCowGame::SubmitGuess(FString Guess)
{
	// increment the turn number
	MyCurrentTry++;
	
	// setup a return value
	FBullCowCount BullCowCount;

	// loop through all letters in the guess
	int32 HiddenWordLength = MyHiddenWord.length;
	for (int32 i = 0; i < HiddenWordLength; i++) {
		//compare letters against the hidden word
		for (int32 j = 0; j < HiddenWordLength; j++) {
			if (MyHiddenWord[i] == Guess[j]) {
				if (i == j) {
					BullCowCount.Bulls++;
			}
				else BullCowCount.Cows++;
			//if they match then 
				//if they are in the same space
					//increment bulls
				//else
					//increment cows 
		}
	}
	return BullCowCount;
}
