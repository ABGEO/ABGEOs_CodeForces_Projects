#include <iostream>

using namespace std;

int main()
{
	string Word, wordNew = "";
	cin >> Word;

	for (int i = 0; i < Word.length(); i++)
	{
		Word[i] = tolower(Word[i]);

		if (Word[i] == 'a' || Word[i] == 'o' || Word[i] == 'y' || Word[i] == 'e' || Word[i] == 'u' || Word[i] == 'i')
			continue;

		wordNew += Word[i];
	}

	for (int i = 0; i < wordNew.length(); i++)
		cout << "." << wordNew[i];

	return 0;
}
