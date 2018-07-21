#include <iostream>
#include <string>

using namespace std;

int main()
{
	string Word = "";

	cin >> Word;

	char FirsChar = toupper(Word[0]);

	cout << FirsChar;

	for (int i = 1; i < Word.length(); i++)
	{
		cout  << Word[i];
	}
}
