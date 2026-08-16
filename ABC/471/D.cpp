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

int main() {
  int Q, V;
  cin >> Q >> V;

  priority_queue<ll> q;

  REP(qi, Q) {
    int type, t;
    cin >> type >> t;

    if (type == 1) {
      int w;
      cin >> w;
      q.push(w - t);
    } else {
      if (q.size() == 0) {
        cout << -1 << endl;
      } else {
        ll ans = q.top() + t;
        q.pop();
        cout << min<ll>(ans, V) << endl;
      }
    }
  }

  return 0;
}
