#include <iostream>

using namespace std;

int main()
{
  string arr[5] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

  int n;

  cin >> n;

  while(n>5)
    n = n / 2 - 2;

  cout << arr[n - 1];

  return 0;
}
