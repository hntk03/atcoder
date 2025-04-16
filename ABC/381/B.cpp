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

	if(S.length() %2 == 1){
		cout << "No" << endl;
		return 0;
	}
	
	bool ok = true;
	for(int i=0;i<S.length()-1;i+=2){
		if(S[i] != S[i+1]) ok = false;
	}

	map<char, int> mp;
	REP(i,S.length()){
		mp[S[i]]++;
	}

	bool two = true;
	for(auto [k, v] : mp){
		if(v != 2) two = false;
	}

	if(ok and two) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
