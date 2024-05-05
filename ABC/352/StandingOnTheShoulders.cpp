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
	vector<pair<ll, ll> > v;

	ll sum = 0;
	REP(i,N){
		ll A, B; cin >> A >> B;
		v.push_back(make_pair(A, B));
		sum += A;
	}

	ll ans = 0;
	REP(i,N){
		sum -= v[i].first;
		ans = max(ans, sum + v[i].second);
		sum += v[i].first;
	}

	cout << ans << endl;

	return 0;

}
