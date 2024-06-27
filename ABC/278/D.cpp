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
	map<int, ll> mp;
	REP(i,N){
		ll A; cin >> A;
		mp[i] = A;
	}

	ll buf = 0;
	vector<ll> ans;
	int Q; cin >> Q;
	REP(i,Q){
		int q; cin >> q;
		if(q == 1){
			ll x; cin >> x;
			buf = x;
			mp.clear();
		}else if(q == 2){
			int to;
			ll x;
			cin >> to >> x;
			to--;
			mp[to] += x;
		}else{
			int iq; cin >> iq;
			iq--;
			ans.push_back(mp[iq] + buf);
		}
	}

	for(ll x : ans){
		cout << x << endl;
	}

	return 0;

}
