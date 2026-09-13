#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// repetition
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int N;
  cin >> N;

  int one = 0, ten = 0, hun = 0;
  REP(i, N) {
    int A;
    cin >> A;

    if (A % 1000 == 0) continue;
    int diff = (1000 * ((A / 1000) + 1)) - A;
    hun += diff / 100;
    diff -= 100 * (diff / 100);
    ten += diff / 10;
    diff -= 10 * (diff / 10);
    one += diff;
  }
  cout << one << " " << ten << " " << hun << endl;
  return 0;
}
