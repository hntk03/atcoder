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
	vector<ll> A(N), B(M);
	REP(i,N) cin >> A[i];
	REP(i,M) cin >> B[i];

	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	ll ans = 0;
	int idx = 0;
	REP(i,N){
		if(idx == M) continue;
		if(A[i] >= B[idx]){
			ans += A[i];
			idx++;
		}
	}

	if(idx != M) ans = -1;
	cout << ans << endl;

	return 0;

}
