#include <iostream>
#include <string>
#include "FBullCowGame.h"

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
bool AskToPlayAgain();

FBullCowGame FBCGame;

int main() 
{
	do{
		PrintIntro();
		PlayGame();
		//AskToPlayAgain();
	} 
	while (AskToPlayAgain());
	return 0;
}

void PlayGame()
{
	int MaxTries = FBCGame.GetMaxTries();
	cout << MaxTries << endl;
	for (int i = 1; i <= MaxTries; i++)
	{
		string Guess = GetGuess();
		cout << "Your Guess was: " << Guess << endl;
	}
}

// Introduce the game
void PrintIntro() 
{
	constexpr int WORD_LENGTH = 9;
	cout << "Welcome to Bulls and Cows!\n";
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?\n";
	cout << endl;
	return;
}

// Get a guess from the player
string GetGuess() 
{
	int CurrentTry = FBCGame.GetCurrentTry();
	cout << "Try " << CurrentTry << ". Take your guess!: ";
	string Guess = "";
	getline(cin, Guess);
	cout << endl;
	return Guess;
}

bool AskToPlayAgain()
{
	cout << "Do you want to play again? Y/N ";
	string Response = "";
	getline(cin, Response);
	return (Response[0] == 'Y') || (Response[0] == 'y');
}
