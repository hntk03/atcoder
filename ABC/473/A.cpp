#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// repetition
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main(void) {
  int N;
  cin >> N;

  int sum = 0;
  REP(i, N) {
    int A;
    cin >> A;
    if (i >= N / 2) sum += A;
  }

  cout << sum << endl;
  return 0;
}
