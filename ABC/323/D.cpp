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
	priority_queue<ll, vector<ll>, greater<ll>> que;

	REP(i,N){
		ll S, C; cin >> S >> C;
		mp[S] += C;
	}

	int ans = 0;
	while(mp.size()){
		auto [s, c] = *mp.begin();
		mp.erase(mp.begin());
		ans += c%2;
		c /= 2;
		if(c) mp[s*2] += c;
	}

	cout << ans << endl;

	return 0;
}
