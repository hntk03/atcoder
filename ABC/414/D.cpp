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

	int N, M; cin >> N >> M;
	vector<ll> X(N);
	REP(i,N) cin >> X[i];

	sort(X.begin(), X.end());

	vector<ll> d;
	REP(i,N-1) d.push_back(X[i+1]-X[i]);
	sort(d.begin(), d.end());

	REP(i,M-1) d.pop_back();
	
	ll ans = 0;
	for(ll di : d) ans += di;

	cout << ans << endl;
	return 0;

}
