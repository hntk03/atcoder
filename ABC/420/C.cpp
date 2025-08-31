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
	vector<ll> A(N), B(N);
	REP(i,N) cin >> A[i];
	REP(i,N) cin >> B[i];

	ll sum = 0;
	REP(i,N) sum += min(A[i], B[i]);

	REP(i,Q){
		char c; cin >> c;
		int X, V; cin >> X >> V;
		X--;

		sum -= min(A[X], B[X]);

		if(c == 'A') A[X] = V;
		else  B[X] = V;

		sum += min(A[X], B[X]);
		cout << sum << endl;
	}
	

	return 0;

}
