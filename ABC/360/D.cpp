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

	int N; 
	ll T; cin >> N >> T;
	string S; cin >> S;
	vector<ll> neg, pos;
	REP(i,N){
		int X; cin >> X;
		if(S[i] == '0') neg.push_back(X);
		else pos.push_back(X);
	}

	sort(neg.begin(), neg.end());
	sort(pos.begin(), pos.end());

	auto left_count = [&](ll r){
		return lower_bound(pos.begin(), pos.end(), r) - pos.begin();
	};

	ll ans = 0;
	for(ll x : neg){
		ll l = x - T*2, r = x;
		ans += left_count(r) - left_count(l);
	}

	cout << ans << endl;

	return 0;

}
