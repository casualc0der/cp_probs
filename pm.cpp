#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
  if (a % b == 0)
  {
    return b;
  }

  gcd(b, a % b);
}

int lcm(int a, int b)
{

  return (a * b) / gcd(a, b);
}

void solve()
{
  int tc;
  cin >> tc;
  auto vec = vector<int>();
  while (tc--)
  {
    int n;
    cin >> n;
    vec.push_back(n);
  }
  for (auto n : vec)
  {
    int a = INT16_MAX;
    int b = INT16_MAX;
    for (int i = 1; i < n; i++)
    {
      if (n % i == 0)
      {
        if (lcm(i, n - i) < b)
          a = i;
        b = n - i;
      }
    }
    cout << a << " " << b << endl;
  }
}

int main()
{
  solve();
}
