#include <iostream>
#include <map>

using namespace std;

int main ()
{
  map <char, int> lett;

  string str;

  cin >> str;

  int n = str.length(), minn(100000);

  for (int i(0); i < n; i++)
  {
    lett[str[i]]++;
  }

  lett['a'] /= 2;
  lett['u'] /= 2;

  for (char c = 'B'; c < 'v'; c++)
  {
    if (!(c == 'B' || c == 'u' || c == 'l' || c == 'b' || c == 'a' || c == 's' || c == 'r'))
      continue;

    if (lett[c] < minn)
      minn = lett[c];
  }

  cout << minn << endl;
  return 0;
}
