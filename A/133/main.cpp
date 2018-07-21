#include <iostream>
#include <string>

using namespace std;

int main()
{
	string Word = "";

	cin >> Word;

	char WordChar;
	bool YES = false;
	for (int i(0); i < Word.length(); i++)
	{
		WordChar = Word[i];

		if (WordChar == 'H' || WordChar == 'Q' || WordChar == '9')
		{
			YES = true;
			break;
		}
	}

	if (YES)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}
