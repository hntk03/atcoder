#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 1e9;

int main(void){

	string S; cin >> S;

	set<char> st;
	REP(i,S.length()){
		st.insert(S[i]);
	}

	if(st.size() == 26) cout << -1 << endl;
	else{
		for(char s = 'a'; s <= 'z'; ++s){
			if(st.count(s) == 0){
				cout << S << s << endl;
				return 0;
			}
		}
	}
	return 0;

}
