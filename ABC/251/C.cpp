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
	map<string, ll> mp;
	vector<string> S(N);
	REP(i,N){
		ll T;
		cin >> S[i] >> T;
		if(mp.count(S[i]) == 0) mp[S[i]] = T;
	}

	int ans = 0;
	ll maxv = 0;
	REP(i,N){
		ll T = mp[S[i]];
		if(maxv < T){
			ans = i+1;
			maxv = T;
		}
	}

	cout << ans << endl;

	return 0;

}
