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
  ll X, Y;
  cin >> N >> X >> Y;

  vector<ll> A(N);
  REP(i, N) cin >> A[i];

  SORT(A);

  ll w = A[0] * Y;
  ll ans = 0;
  REP(i, N) {
    ll sw = A[i] * Y;
    ll dif = sw - w;
    if (dif % (Y - X) != 0) {
      cout << -1 << endl;
      return 0;
    }
    ll num = dif / (Y - X);
    if (num > A[i]) {
      cout << -1 << endl;
      return 0;
    }
    ans += A[i] - num;
  }

  cout << ans << endl;
  return 0;
}
