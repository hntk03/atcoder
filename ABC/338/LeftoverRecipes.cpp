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

	vector<int> Q(N), A(N), B(N);

	for(auto &q : Q) cin >> q;
	for(auto &a : A) cin >> a;
	for(auto &b : B) cin >> b;

	int cntA = INF;
	REP(i,N){
		if(A[i] == 0) continue;
		cntA = min(cntA, Q[i]/A[i]);
	}

	int ans = 0;
	REP(i,cntA+1){

		vector<int> R(N);
		REP(j,N) R[j] = Q[j] - A[j]*i;

		int cntB = INF;
		REP(j,N){
			if(B[j] == 0) continue;
			cntB = min(cntB, R[j]/B[j]);
		}

		ans = max(ans, i+cntB);
	}

	cout << ans << endl;

	return 0;

}
