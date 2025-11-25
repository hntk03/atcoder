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
  string S;
  cin >> S;

  vector<pair<char, int>> v;
  v.push_back(make_pair(S.front(), 1));

  FOR(i, 1, S.length()) {
    if (v.back().first == S[i]) {
      v.back().second++;
    } else {
      v.push_back(make_pair(S[i], 1));
    }
  }

  ll ans = 0;
  REP(i, v.size() - 1) {
    if (v[i].first + 1 == v[i + 1].first) {
      int now = min(v[i].second, v[i + 1].second);
      ans += now;
    }
  }

  cout << ans << endl;

  return 0;
}
