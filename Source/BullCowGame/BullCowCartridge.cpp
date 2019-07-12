// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

FString HiddenWord = TEXT("telemetry");

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay(); 
    PrintLine(TEXT("Welcome to Bulls & Cows."));
    PrintLine(FString::Printf(TEXT("Guess the %i letter isogram!"), HiddenWord.Len()));


}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    // ClearScreen();

    if(Input.Len() == HiddenWord.Len())
    {
        PrintLine(TEXT("Yep. That's a four letter word."));
    }
    else if(Input == HiddenWord)
    {
        PrintLine(TEXT("You guessed the right word! Great work."));
    }
    else
    {
        PrintLine(FString::Printf(TEXT("Enter a %i letter word..."), HiddenWord.Len()));
    }
}