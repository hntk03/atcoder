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

	ll L, R; cin >> L >> R;	
	vector<pair<ll, ll>> ans;

	auto f = [&](auto f, ll l, ll r) -> void{
		if(L <= l and r <= R){
			ans.push_back(make_pair(l,r));
			return ;
		}
		ll c = (l+r) >> 1;
		if(L < c) f(f, l, c);
		if(c < R) f(f, c, r);
	};

	f(f, 0, 1ll<<60);

	cout << ans.size() << endl;
	for(auto [l, r] : ans) cout << l << ' ' << r << endl;

	return 0;

}
