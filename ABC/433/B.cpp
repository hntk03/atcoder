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

  REP(i, N) {
    int idx = -1;
    REP(j, i) {
      if (A[j] > A[i]) {
        idx = j + 1;
      }
    }
    cout << idx << endl;
  }

  return 0;
}
