#include <iostream>
#include <map>

using namespace std;

int main ()
{
  map <string, string> words;

  int n, m;
  string ans = "", str1, str2;

  cin >> n >> m;

  for (int i(0); i < m; i++)
  {
    cin >> str1 >> str2;

    words[str1] = str2;
  }

  for (int i(0); i < n; i++)
  {
    cin >> str1;

    if (str1.length() > words[str1].length())
      ans += words[str1] + " ";
    else
      ans += str1 + " ";
  }

  cout << ans;
  return 0;
}
