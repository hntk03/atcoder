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

	int K, N; cin >> K >> N;
	vector<int> A(N);

	REP(i,N) cin >> A[i];

	vector<int> d(N);
	FOR(i,1,N){
		d[i-1] = A[i] - A[i-1];
	}
	d[N-1] = A[0] + K - A[N-1];

	SORT(d);
	ll ans = 0;
	REP(i,N-1){
		ans += d[i];
	}
	
	cout << ans << endl;
	return 0;

}
