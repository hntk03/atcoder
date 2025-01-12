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
	vector<int> A(N);
	REP(i,N) cin >> A[i];

	vector<int> P(N), Q(N);
	P[0] = A[0];
	Q[N-1] = A[N-1];
	FOR(i,1,N) P[i] = max(A[i], P[i-1]);

	for(int i=N-2;i>=0;i--) Q[i] = max(A[i], Q[i+1]);
	
	int D; cin >> D;
	REP(i,D){
		int L, R; cin >> L >> R;
		L--; R--;
		int ans = max(P[L-1], Q[R+1]);
		cout << ans << endl;
	}

	return 0;

}
