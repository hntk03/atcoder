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

	ll N, X; cin >> N >> X;	
	map<ll, bool> mp;
	REP(i,N){
		ll A; cin >> A;
		mp[A] = true;
	}

	bool ans = false;
	for(auto d : mp){
		ll t = d.first - X;
		if(mp.count(t)) ans = true;
	}

	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
