#include <iostream>
#include "clsUtil.h";



using namespace std;

int main()
{


	srand(time(0));



	cout << clsUtil::RandomNumber(1, 10)<<endl;
	cout << clsUtil::RandomChar(clsUtil::enCharType::CapitalLetter) << endl;
	cout << clsUtil::GenerateWord(clsUtil::enCharType::CapitalLetter, 5) << endl;
	cout << clsUtil::GenerateKey(clsUtil::enCharType::CapitalLetter) << endl;
	clsUtil::GenerateKeys(clsUtil::enCharType::CapitalLetter, 10);

	//Swap int
	int x = 5, y = 7;
	cout << x << " " << y << endl;
	clsUtil::Swap(x, y);
	cout << x << " " << y << endl;

	//Swap double
	double z = 5.6, c = 7.1;
	cout << z << " " << c << endl;
	clsUtil::Swap(z, c);
	cout << z << " " << c << endl;

	//Swap string
	string a = "Mohamed", b = "Ahmed";
	cout << a << " " << b << endl;
	clsString::Swap(a, b);
	cout << a << " " << b << endl;

	//Swap Dates
	clsDate d1(1, 1, 2002);
	clsDate d2(10, 5, 2025);

	cout << clsUtil::DateToString(d1) << clsUtil::DateToString(d2)  << endl;
	clsUtil::Swap(d1, d2);
	cout << clsUtil::DateToString(d1) << clsUtil::DateToString(d2) << endl;

	//Shuffel Array

	//int Array
	int intArr[4] = { 1,2,3,4 };
	clsUtil::ShuffelArray(intArr, 4);
	cout << "\nArray After Shuffel : \n";
	for (int i = 0; i < 4; i++)
	{
		cout << intArr[i] << " ";
	}

	//string Array
	string strArr[4] = { "Ahmed","Omar","Osama","Medhat" };
	cout << "\n\nArray After Shuffel : \n";
	clsUtil::ShuffelArray(strArr, 4);
	for (int i = 0; i < 4; i++)
	{
		cout << strArr[i] << " ";
	}

	string ArrWords[5];
	clsUtil::FillArrayWithRandomWords(ArrWords, 5, 6, clsUtil::enCharType::SpecialChar);
	cout << "\n\n";
	for (int i = 0; i < 5; i++)
	{
		cout << ArrWords[i] << " ";
	}
	
	string ArrKeys[5];
	clsUtil::FillArrayWithRandomKeys(ArrKeys,4, clsUtil::enCharType::SmallLetter);
	cout << "\n\n";
	for (int i = 0; i < 5; i++)
	{
		cout << ArrKeys[i] << " ";
	}

	string Text = "Ahemd";
	string TextAfterEncryption="", TextAfterDecryption="";

	TextAfterEncryption = clsUtil::EncreptText(Text, 52);
	TextAfterDecryption = clsUtil::DecryptText(TextAfterEncryption, 52);

	cout << "\n\nText After Encryption: " << TextAfterEncryption << "\n";
	cout << "Text After Decryption: " << TextAfterDecryption << "\n";













	//system("pause>0");
	cin.get();
	return 0;


}

