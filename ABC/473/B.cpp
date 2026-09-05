#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// repetition
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main(void) {
  int N;
  cin >> N;
  map<int, int> mp;
  REP(i, N) {
    int A;
    cin >> A;
    mp[A]++;
  }

  int ans = 0;
  for (auto [p, v] : mp) {
    ans += p * (v % 2);
  }

  cout << ans << endl;

  return 0;
}
