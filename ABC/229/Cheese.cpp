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

	ll N, W; cin >> N >> W;	

	vector<pair<ll, ll> > v(N);
	REP(i,N){
		int A, B; cin >> A >> B;
		v[i] = make_pair(A, B);
	}

	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());

	ll w = 0;	
	ll ans = 0;
	REP(i,N){
		if(w <= W){
			ll cnt = min(v[i].second, W-w);
			ans += cnt * v[i].first;
			w += cnt;
		}
	}

	cout << ans << endl;

	return 0;

}
