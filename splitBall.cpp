#include <iostream>
#include<map>
using namespace std;
#define ll long long int
ll M = 1000000007;
ll arr[1000001];

  void factorial() 
{
  arr[0] = 0;
  arr[1] = 1;

  for (ll i = 2; i <= 1000000; i++) {
    arr[i] = ((i * arr[i - 1]) % M) % M;
  }
}

int main() {
  factorial();
  int tc;
  cin >> tc;

  while (tc--) 
  {
    ll numBalls;
    cin >> numBalls;
    ll fact = 0;
    map<ll, ll> mp;

    for (ll i = 0; i < numBalls; i++) {

      int x;
      cin >> x;
      mp[x]++;
    }

    for (auto i : mp) 
    {
      fact = (fact + (arr[i.first] * i.second) % M) % M;
    }

    cout << fact << endl;
  }
  return 0;
}