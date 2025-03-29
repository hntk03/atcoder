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
  vector<int> A(N);
  REP(i, N) cin >> A[i];

  map<int, vector<int>> mp;
  REP(i, N) { mp[A[i]].push_back(i); }

  int ans = INF;
  for (auto [k, v] : mp) {
    if (v.size() == 0 or v.size() == 1)
      continue;

    FOR(i, 1, v.size()) { ans = min(ans, v[i] - v[i - 1] + 1); }
  }

  if (ans == INF)
    ans = -1;
  cout << ans << endl;

  return 0;
}
