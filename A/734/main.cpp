#include <iostream>

using namespace std;

int main()
{
    int n, A(0), D(0);
    char ch;

    cin >> n;

    for (int i(0); i < n; i++)
    {
        cin >> ch;

        switch (ch)
        {
            case 'A': A++; break;
            case 'D': D++; break;
        }
    }

    if (A > D)
        cout << "Anton";
    else if (A < D)
        cout << "Danik";
    else if (A == D)
        cout << "Friendship";
}
