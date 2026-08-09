#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// container util
#define SORT(c) sort((c).begin(), (c).end())
#define all(a) (a).begin(), (a).end()

// repetition
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

// print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

int main(void) {
  int N;
  cin >> N;
  map<int, int> mp;
  REP(i, N) {
    int C;
    cin >> C;
    mp[C]++;
  }

  int _max = 0;
  for (auto [k, v] : mp) {
    _max = max(v, _max);
  }
  cout << N - _max << endl;
  return 0;
}
