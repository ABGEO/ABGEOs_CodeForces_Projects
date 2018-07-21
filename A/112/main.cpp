#include <iostream>
#include <string>

using namespace std;

int main() {
	string Word1 = "";
	string Word2 = "";

	cin >> Word1;
	cin >> Word2;

	int WordLenght = Word1.length();
	int Cout = 0;
	for (int i = 0; i < WordLenght; i++)
	{
		if (tolower(Word1[i]) > tolower(Word2[i]))
		{
			Cout = 1;
			break;
		}
		if (tolower(Word1[i]) < tolower(Word2[i]))
		{
			Cout = -1;
			break;
		}
		if (tolower(Word1[i]) == tolower(Word2[i]))
		{
			Cout = 0;
		}
	}

	cout << Cout;
}
