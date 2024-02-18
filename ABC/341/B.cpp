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
	vector<ll> A(N);
	REP(i,N) cin >> A[i];

	vector<ll> S(N-1), T(N-1);
	REP(i, N-1){
		cin >> S[i] >> T[i];
	}

	REP(i,N-1){
		ll cnt = A[i] / S[i];
		A[i+1] += cnt * T[i];
	}

	cout << A[N-1] << endl;

	return 0;

}
