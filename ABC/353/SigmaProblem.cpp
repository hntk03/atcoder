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

	const int M = 1e8;

	int N; cin >> N;
	vector<int> A(N);
	REP(i,N) cin >> A[i];
	sort(A.begin(), A.end());

	ll ans = 0;
	REP(i,N) ans += A[i]*ll(N-1);

	int r = N-1;
	REP(i,N){
		while(r >= 0 and A[i]+A[r] >= M) r--;
		// max(r, i+1) < j < N
	  ans -= ll(N - max(r, i) - 1)*M;
	}

	cout << ans << endl;

	return 0;

}
