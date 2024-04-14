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
	map<char, int> mp;

	REP(i,S.length()){
		mp[S[i]]++;
	}

	map<int, int> mp2;
	for(auto x : mp){
		mp2[x.second]++;
	}

	bool ans = true;
	for(auto x : mp2){
		if(x.second != 2) ans = false;
	}

	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
