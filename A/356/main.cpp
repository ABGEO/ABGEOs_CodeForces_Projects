#include <iostream>
#include <set>

using namespace std;


int d[300005];

int main ()
{
  set <int> st;
  set <int>::iterator t;

  int n, m, l, r, w;

  cin >> m >> n;

  for (int i(1); i <= m+1; i++)
    st.insert(i);

  for (int i(0); i < n; i++)
  {
    cin >> l >> r >> w;

    t = st.lower_bound(l);
    while (*t <= r)
    {
      if (*t != w)
      {
        d[*t] = w;
        st.erase(t++);
      }
      else
        t++;
    }
  }

  for (int i(1); i <= m; i++)
    cout << d[i] << " ";

  cout << endl;
  return 0;
}
