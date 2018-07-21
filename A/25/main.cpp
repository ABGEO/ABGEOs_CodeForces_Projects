#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	unsigned char c;
	int upper(0), lower(0);

	cin >> s;

	for (int i(0); i < s.length(); i++)
	{
		c = s[i];

		if (('A'<= c && c <='Z'))
			upper++;
		else
			lower++;
	}

	for (int i(0); i < s.length(); i++)
	{
		if (upper > lower)
			s[i] = toupper(s[i]);
		else if (upper == lower)
			s[i] = tolower(s[i]);
		else
			s[i] = tolower(s[i]);
	}

	cout << s;

	return 0;
}
