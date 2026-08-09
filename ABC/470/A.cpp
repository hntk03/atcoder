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

  FOR(i, 1, N + 1) {
    if (i % 3 == 0)
      cout << "Fizz" << endl;
    else
      cout << i << endl;
  }

  return 0;
}
