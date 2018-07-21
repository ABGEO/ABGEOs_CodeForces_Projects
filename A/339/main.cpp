#include <iostream>

using namespace std;

int main()
{
	string str, strNew = "";
	int x1(0), x2(0), x3(0);

	cin >> str;

	for (int i(0); i < str.length(); i++)
	{
		switch(str[i])
		{
			case '1': x1++; break;
			case '2': x2++; break;
			case '3': x3++; break;
		}
	}

	for (int i(0); i < x1; i++)
		strNew += "1+";

	for (int i(0); i < x2; i++)
		strNew += "2+";

	for (int i(0); i < x3; i++)
		strNew += "3+";

	for (int i(0); i < strNew.length()-1; i++)
		cout << strNew[i];

	return 0;
}
