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

bool isOk(ll k){
	string s = to_string(k);

	REP(i,s.length()/1){
		if(s[i] != s[s.length()-1-i]) return false;
	}
	
	return true;

}

int main(void){

	ll N; cin >> N;

	
	ll ans = 0;
	for(ll x=0;(x*x*x)<=N;x++){
		ll k = x*x*x;

		if(isOk(k)) ans = max(ans, k);
	}

	cout << ans << endl;

	return 0;

}
