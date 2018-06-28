#include <iostream>
#include <set>

using namespace std;

int main ()
{
  set <int> st;
  set <int>::iterator t;
  int n;

  cin >> n;

  int d[n+3];

  for (int i(0); i < n; i++)
    cin >> d[i];

  for (int i (n-1); i >= 0; i--)
  {
    st.insert(d[i]);
  }

  t = st.begin();

  while (t != st.end())
  {
    cout << *t << " ";
    t++;
  }

  cout << endl;
  return 0;
}
