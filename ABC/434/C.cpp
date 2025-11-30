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

void solve() {
  int N, H;
  cin >> N >> H;

  vector<int> t(N), l(N), u(N);
  REP(i, N) {
    cin >> t[i] >> l[i] >> u[i];
  }

  int min_ = H, max_ = H;
  int prev = 0;

  REP(i, N) {
    int diff = t[i] - prev;

    int d = (l[i] - min_) >= 0 ? 1 : -1;
    if (d == 1) {
      int now = min_ + diff;
      if (now < l[i]) {
        min_ = now;
      } else {
        min_ = l[i];
      }
    } else {
      int now = min_ - diff;
      now = max(0, now);

      if (now < l[i]) {
        min_ = l[i];
      } else {
        min_ = now;
      }
    }

    d = (l[i] - max_) >= 0 ? 1 : -1;
    if (d == 1) {
      int now = max_ + diff;
      if (now < u[i]) {
        max_ = now;
      } else {
        max_ = u[i];
      }
    } else {
      int now = max_ - diff;
      now = max(0, now);

      if (now < u[i]) {
        max_ = u[i];
      } else {
        max_ = now;
      }
    }

    bool touched = min_ <= u[i] and l[i] <= max_;
    if (!touched) {
      cout << "No" << endl;
      return;
    }
    prev = t[i];
  }
  cout << "Yes" << endl;
  return;
}

int main(void) {
  int T;
  cin >> T;

  REP(i, T) solve();

  return 0;
}
