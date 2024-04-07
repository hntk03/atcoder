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

	int N; cin >> N;	

	map<ll, ll> mp;
	REP(i,N){
		ll A, C; cin >> A >> C;

		if(mp[C] == 0) mp[C] = 1e10;
		mp[C] = min(A, mp[C]);
	}

	ll ans = 0;
	for(auto x : mp){
		ans = max(ans, x.second);
	}

	cout << ans << endl;

	return 0;

}
