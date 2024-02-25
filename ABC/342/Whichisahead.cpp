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
	vector<int> P(N+1);

	REP(i,N){
		int p; cin >> p;
		P[p] = i;
	}

	int Q; cin >> Q;

	vector<int> A(Q), B(Q);
	REP(i,Q){
		cin >> A[i] >> B[i];
	}

	REP(i,Q){
		int ans = min(P[A[i]], P[B[i]]);
		if(P[A[i]] < P[B[i]]) cout << A[i] << endl;
		else cout << B[i] << endl;
	}


	return 0;

}
