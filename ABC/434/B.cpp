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
  int N, M;
  cin >> N >> M;

  vector<vector<int>> birds(M);
  REP(i, N) {
    int A, B;
    cin >> A >> B;
    A--;
    birds[A].push_back(B);
  }

  REP(i, M) {
    int sum = accumulate(birds[i].begin(), birds[i].end(), 0);
    printf("%.10f\n", (double)sum / birds[i].size());
  }

  return 0;
}
