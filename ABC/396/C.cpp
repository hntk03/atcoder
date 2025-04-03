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
	vector<int> B(N), W(M);
	REP(i,N) cin >> B[i];
	REP(i,M) cin >> W[i];

	sort(B.rbegin(), B.rend());
	sort(W.rbegin(), W.rend());

	ll ans = 0;
	ll sumB = 0;
	ll maxW = 0, sumW = 0;
	REP(i,N){
		sumB += B[i];
		if(i < M) sumW += W[i];

		maxW = max(maxW, sumW);
		ans = max(ans, sumB + maxW);
	}

	cout << ans << endl;
	return 0;
}
