#include <iostream>
#include <map>

using namespace std;

map <string, int> com;

int main()
{
  int n;
  string str1 = "", str2 = "";

  cin >> n;

  while (n--)
  {
    string str;
    cin >> str;
    com[str]++;

    if (str1 == "")
      str1 = str;

    if (str2 == "" && str != str1)
      str2 = str;
  }

  if (com[str1] > com[str2])
    cout << str1;
  else
    cout << str2;

  return 0;
}
