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

  int Q; cin >> Q;

  vector<string> now;
  string S = "";
  REP(i,Q){
    int type; cin >> type;
    if(type == 1){
      char c; cin >> c;
      S += c;
      if(c == '('){
        now.push_back("(");
      }else{
        if(now.size() == 0){
          now.push_back(")");
        }else{
          if(now.back() == "("){
            now.pop_back();
          }else{
            now.push_back(")");
          }
        }
      }
    }else{
      S.pop_back();
      if(now.size() == 0){
        if(S.size() != 0){
          now.push_back("()");
          now.back().pop_back();
        } 
      }else{
        now.back().pop_back();
        if(now.back() == ""){
          now.pop_back();
        } 
      }
    }
    cout << (now.size() == 0 ? "Yes" : "No") << endl;
  }

  return 0;

}
