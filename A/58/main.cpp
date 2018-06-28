#include <iostream>

using namespace std;

int main()
{
  string str, hello = "hello";
  int j(0);

  cin >> str;

  for (int i(0); i < str.size(); i++)
    if (str[i] == hello[j])
      j++;

  if (j >= 5)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}
