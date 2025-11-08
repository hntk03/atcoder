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

ll c2(ll n) {
  return n * (n - 1) / 2;
}

int main(void) {
  int N;
  cin >> N;
  vector<int> A(N);
  REP(i, N) cin >> A[i];
  REP(i, N) A[i]--;

  vector<int> cnt(N);
  REP(i, N) cnt[A[i]]++;

  ll ans = 0;
  REP(i, N) {
    ans += c2(cnt[i]) * (N - cnt[i]);
  }

  cout << ans << endl;
  return 0;
}
