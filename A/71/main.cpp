#include <iostream>
#include <string>

using namespace std;

int main() {
	int n = 0;
	cin >> n;

	string Word[n];
	for (int i = 0; i < n; i++)
		cin >> Word[i];

	int WordLastChar;
	for (int i = 0; i < n; i++)
		{
			if (Word[i].length() <= 10)
				cout << Word[i] << endl;
			else
			{
				WordLastChar = Word[i].length() - 1;
				cout << Word[i][0] << Word[i].length() - 2 << Word[i][WordLastChar] << endl;
			}
		}

	return 0;
}
