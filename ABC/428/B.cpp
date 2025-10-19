#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())
#define all(a) (a).begin(), (a).end()

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

int main(void){

  int N, K; cin >> N >> K;
  string S; cin >> S;

  map<string, int> mp;
  REP(i,N-K+1){
    mp[S.substr(i,K)]++;
  }
  
  int mx = 0;
  for(auto [k, v] : mp){
    if(mx < v) mx = v;
  }

  vector<string> xs;
  for(auto [k, v] : mp){
    if(mx == v) xs.push_back(k);
  }

  sort(xs.begin(), xs.end());

  cout << mx << endl;
  for(string s : xs){
    cout << s << " ";
  }
  cout << endl;

  return 0;

}
