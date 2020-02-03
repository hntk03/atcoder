#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 1e9;

int main(void){

	int N, M; cin >> N >> M;
	vector<int> A(N);

	REP(i,N) cin >> A[i];

	map<int, int> mp;
	vector<int> sum(N+1);
	sum[0] = 0;
	REP(i,N+1){
		sum[i+1] = (sum[i] + A[i]) % M;
	}

	ll ans = 0;
	REP(i,N+1){
		ans += mp[sum[i]];
		mp[sum[i]]++;
	}

	cout << ans << endl;


	return 0;

}
