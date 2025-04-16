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

	int N, K; cin >> N >> K;
	vector<int> A(max(K, N+1));
	vector<int> S(A.size()+1);

	REP(i,K) A[i] = 1;
	REP(i,K) S[i+1] = S[i] + A[i];

	const int mod = 1e9;
	FOR(i,K,N+1){
		A[i] = (S[i] - S[i-K] + mod) % mod;
		S[i+1] = (S[i] + A[i]) % mod;
	}

	cout << A[N] << endl;
	return 0;
}
