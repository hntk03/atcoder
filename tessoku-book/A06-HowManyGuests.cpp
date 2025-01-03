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

	int N, Q; cin >> N >> Q;
	vector<int> A(N);
	REP(i,N) cin >> A[i];

	vector<ll> S(N+1);
	S[0] = 0;
	FOR(i,1,N+1){
		S[i] = S[i-1] + A[i-1];
	}
	
	REP(i,Q){
		int L, R; cin >> L >> R;
		L--; R--;

		cout << S[R+1] - S[L] << endl;
	}

	return 0;

}
