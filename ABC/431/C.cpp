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
  int N, M, K;
  cin >> N >> M >> K;

  vector<int> H(N), B(M);
  REP(i, N) cin >> H[i];
  REP(i, M) cin >> B[i];
  SORT(H);
  SORT(B);

  vector<int> kH(H.begin(), H.begin() + K);
  vector<int> kB(B.end() - K, B.end());

  REP(i, K) {
    if (kH[i] > kB[i]) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}
