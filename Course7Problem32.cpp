#include <iostream>
#include <string>
#include <cctype>

using namespace std;

char ReadLetter()
{
	char Letter = ' ';
	cout << "Enter a letter to search:\n";
	cin >> Letter;
	return Letter;
}

char InvertLetter(char & Letter)
{

	return islower(Letter) ? toupper(Letter) : tolower(Letter);

}

bool IsVowel(char Letter)
{

	Letter = tolower(Letter);

	return Letter == 'a' || Letter == 'o' || Letter == 'u' || Letter == 'e' || Letter == 'i';

}

int main()
{
	char UserLetter = ReadLetter();
	IsVowel(UserLetter);

	if (IsVowel(UserLetter))
		cout << "Yes, letter \'" << UserLetter << "\' is a vowel\n";
	else 
		cout << "No, letter \'" << UserLetter << "\' is not a vowel\n";


	return 0;
}