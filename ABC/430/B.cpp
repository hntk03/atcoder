#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())
#define all(a) (a).begin(), (a).end()

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i, n) FOR(i, 0, n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

int main(void){
  int N, M;
  cin >> N >> M;
  vector<string> S(N);
  REP(i,N) cin >> S[i];

  set<vector<char>> st;
  REP(i,N-M+1){
    REP(j,N-M+1){
      vector<char> v;
      REP(k,M){
        REP(l,M){
          v.push_back(S[i+k][j+l]);
        }
      }
      st.insert(v);
    }
  }
  
  cout << st.size() << endl;
  return 0;

}
