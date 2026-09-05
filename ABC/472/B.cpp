#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// repetition
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main(void) {
  int N;
  cin >> N;
  vector<int> L(N);
  int sum = 0;
  REP(i, N) {
    cin >> L[i];
    sum += L[i];
  }

  int l = 0;
  int r = sum;

  int ans = 1000000000;
  REP(i, N) {
    l += L[i];
    r -= L[i];
    ans = min(ans, abs(l - r));
  }

  cout << ans << endl;
  return 0;
}
