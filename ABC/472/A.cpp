#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// repetition
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main(void) {
  string S;
  cin >> S;

  REP(i, S.length()) {
    if (S[i] == 'A') continue;
    S[i] = '.';
  }

  cout << S << endl;
  return 0;
}
