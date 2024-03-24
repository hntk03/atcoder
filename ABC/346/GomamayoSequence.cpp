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
	string S; cin >> S;

	vector<int> C(N);
	REP(i,N) cin >> C[i];

	REP(i,N){
		if(i%2 == 1) S[i] ^= '1'^'0';
	}

	ll ans = 1e18;
	REP(bi, 2){
		vector<ll> l(N+1), r(N+1);
		REP(i,N){
			l[i+1] = l[i];
			if(S[i] == '1') l[i+1] += C[i];
		}
		for(int i=N-1; i>=0;i--){
			r[i] = r[i+1];
			if(S[i] == '0') r[i] += C[i];
		}
		FOR(i,1,N) ans = min(ans, l[i]+r[i]);

		REP(i,N) S[i] ^= '0'^'1';
	}

	cout << ans << endl;

	return 0;

}
