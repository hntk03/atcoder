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

const ll INF = 1e18;

int main(void) {
  int N;
  cin >> N;

  vector<ll> A(N);
  REP(i, N) cin >> A[i];
  A.push_back(INF);
  A.push_back(-INF);
  SORT(A);
  N += 2;

  int idx = N + 2 - 1;
  REP(i, N) {
    if (A[i] < 0) continue;
    idx = i;
    break;
  }

  int l = idx - 1, r = idx;
  ll ans = 0;
  ll now = 0;
  ll to_left = 0;
  ll to_right = 0;
  while (!(0 == l and r == N - 1)) {
    to_left = abs(now - A[l]);
    to_right = abs(now - A[r]);

    if (to_left <= to_right) {
      ans += to_left;
      now = A[l];
      l--;
    } else {
      ans += to_right;
      now = A[r];
      r++;
    }
  }

  cout << ans << endl;
  return 0;
}
