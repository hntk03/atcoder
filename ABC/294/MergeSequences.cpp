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

	vector<ll> C;
	REP(i,N) C.push_back(A[i]);
	REP(i,M) C.push_back(B[i]);

	sort(C.begin(), C.end());

	map<ll, int> idx;
	REP(i,N+M) idx[C[i]] = i+1;

	REP(i,N) cout << idx[A[i]] << " ";
	cout << endl;

	REP(i,M) cout << idx[B[i]] << " ";
	cout << endl;

	return 0;

}
