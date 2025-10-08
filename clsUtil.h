#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include "clsDate.h";

using namespace std;

class clsUtil : public clsDate
{

public:
	static int RandomNumber(int From, int To) {

		return rand() % (To - From + 1) + From;

	}

	static enum enCharType
	{
		SmallLetter = 1, CapitalLetter = 2, SpecialChar = 3, Digit = 4
	};

	static char RandomChar(enCharType CharType) {

		switch (CharType)
		{
		case SmallLetter:
			return char(RandomNumber(97, 122));
		case CapitalLetter:
			return char(RandomNumber(65, 90));
		case SpecialChar:
			return char(RandomNumber(33, 47));
		case Digit:
			return char(RandomNumber(48, 57));

		}

	}

	static string GenerateWord(enCharType CharType, short length) {
		string Word = "";

		for (int i = 0; i < length; i++)
		{
			Word += RandomChar(CharType);
		}
		return Word;

	}

	static string GenerateKey(enCharType KeyType) {

		string Key = "";

		for (int i = 1; i <= 4; i++)
		{
			Key += GenerateWord(KeyType, 4);
			if (i != 4)
				Key += "-";
		}
		return Key;


	}

	static void GenerateKeys(enCharType KeyType, short NumberOfKeys) {


		for (int i = 1; i <= NumberOfKeys; i++)
		{
			cout << "Key [" << i << "] : " << GenerateKey(KeyType) << endl;
		}

	}

	static void Swap(int& A, int& B) {

		int Temp;
		Temp = A;
		A = B;
		B = Temp;
	}

	static void Swap(double & A, double& B) {
		double Temp;
		Temp = A;
		A = B;
		B = Temp;
	}

	static void Swap(string& A, string& B) {
		string Temp;
		Temp = A;
		A = B;
		B = Temp;
	}

	static void Swap(clsDate& d1,clsDate& d2) {
		clsDate::Swap(d1, d2);
	}

	static void ShuffelArray(int Arr[100], int ArrLength) {

		for (int i = 0; i < ArrLength; i++)
		{

			Swap(Arr[RandomNumber(0, ArrLength - 1)], Arr[RandomNumber(0, ArrLength - 1)]);

		}
		cout << endl;

	}

	static void ShuffelArray(string Arr[100], int ArrLength) {

		for (int i = 0; i < ArrLength; i++)
		{

			Swap(Arr[RandomNumber(0, ArrLength - 1)], Arr[RandomNumber(0, ArrLength - 1)]);

		}
		cout << endl;

	}

	static void FillArrayWithRandomNumbers(int Arr[100], int length) {

		for (int i = 0; i < length; i++)
		{
			Arr[i] = RandomNumber(1, 100);
		}

	}

	static void FillArrayWithRandomWords(string ArrKeys[100], int NumOfWords, int WordLength, enCharType CharType) {

		for (int i = 0; i < NumOfWords; i++)
		{
			ArrKeys[i] = GenerateWord(CharType, WordLength);
		}

	}

	static void FillArrayWithRandomKeys(string ArrKeys[100], int NumOfKeys, enCharType CharType) {

		for (int i = 0; i < NumOfKeys; i++)
		{
			ArrKeys[i] = GenerateKey(CharType);
		}

	}

	static void FillArrFrom1ToN(int Arr[100], int ArrLength) {

		for (int i = 1; i <= ArrLength; i++)
		{
			Arr[i] = i;
		}

	}

	static int ReverseNumber(int Number) {//1234

		int Reminder = 0, RevNum = 0;
		while (Number > 0)
		{
			//Number = 12 3 4 
			Reminder = Number % 10;
			Number = Number / 10;
			RevNum = RevNum * 10 + Reminder;
		}
		return RevNum;//4321
	}

	static bool IsPalindromNum(int Number) {
		return Number == ReverseNumber(Number);


	}

	static void Tabs(short NumOfTabs) {
		for (int i = 0; i < NumOfTabs; i++)
		{
			cout << "	";
		}
	}

	static string EncreptText(string Text, short EncryptionKey) {
		string EncryptedText = "";

		for (int i = 0; i < Text.length(); i++)
		{
			EncryptedText += char( Text[i] + EncryptionKey);
		}
		return EncryptedText;

	}

	static string DecryptText(string Text, short EncryptionKey) {

		string DecryptedText = "";

		for (int i = 0; i < Text.length(); i++)
		{
			DecryptedText += char(Text[i] - EncryptionKey);
		}
		return DecryptedText;
	}

	static int ReadIntNumber(string Message) {
		int Number;
		cout << Message << endl;
		cin >> Number;
		return Number;
	}

	static float ReadFloatNumber(string Message) {

		float Number;
		cout << Message << endl;
		cin >> Number;
		return Number;

	}

	static float ReadNumberInRange(int From, int To) {
		float Number;
		do
		{
			cout << "Please Enter Number In Range " << From << " To " << To << endl;
			cin >> Number;

		} while (Number < From || Number > To);
		return Number;

	}

	static float ReadPositiveNumber(string Message) {
		float Num;
		do
		{
			cout << Message << endl;
			cin >> Num;

		} while (Num <= 0);
		return Num;
	}



};

