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

  vector<vector<int>> grid(N, vector<int>(N, -1));

  const int white = 0;
  const int black = 1;

  REP(i, N) {
    int j = N - i;
    if (i < j) {
      FOR(y, i, j) {
        FOR(x, i, j) {
          if (i % 2) {
            grid[y][x] = white;
          } else {
            grid[y][x] = black;
          }
        }
      }
    }
  }

  REP(i, N) {
    REP(j, N) {
      if (grid[i][j])
        cout << '#';
      else
        cout << '.';
    }
    cout << endl;
  }

  return 0;
}
