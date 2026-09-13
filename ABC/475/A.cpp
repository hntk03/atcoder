#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// repetition
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  string S;
  cin >> S;

  string Sd;
  string add = "o";
  for (auto c : S) {
    Sd += c + add;
  }

  Sd.pop_back();
  cout << Sd << endl;
  return 0;
}
