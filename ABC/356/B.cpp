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

	vector<ll> A(M), fact(M);

	REP(i,M) cin >> A[i];

	REP(i,N){
		REP(j,M){
			ll X; cin >> X;
			fact[j] += X;
		}
	}

	bool ans = true;
	REP(i,M) if(fact[i] < A[i]) ans = false;

	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
