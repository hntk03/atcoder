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

	string S; cin >> S;	

	set<string> st;
	FOR(i,1,S.length()+1){
		REP(j,S.length()-i+1){
			st.insert(S.substr(j,i));
		}
	}

	cout << st.size() << endl;

	return 0;

}
