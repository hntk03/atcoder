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
	ll K; cin >> N >> K;
	vector<int> A(N);
	REP(i,N) cin >> A[i];

	vector<ll> S(N+1);
	REP(i,N) S[i+1] = S[i] + A[i];

	map<ll, int> mp;
	ll ans = 0;
	REP(i,N+1){
		ans += mp[S[i]];
		mp[S[i]+K]++;
	}

	cout << ans << endl;

	return 0;

}
