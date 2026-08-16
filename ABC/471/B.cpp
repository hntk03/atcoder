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
  vector<string> S(N);
  REP(i, N) cin >> S[i];

  REP(i, N) {
    REP(j, S[i].size()) {
      if ('A' <= S[i][j] and S[i][j] <= 'Z') S[i][j] = tolower(S[i][j]);
    }
  }

  map<string, int> mp;
  REP(i, N) mp[S[i]]++;

  int ans = 0;
  for (auto [k, v] : mp) {
    ans = max(ans, v);
  }

  cout << ans << endl;

  return 0;
}
