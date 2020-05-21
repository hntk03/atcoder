#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

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

	vector<int> B = A;

	SORT(B);

	REP(i,N){
		if(B.back() == A[i]) cout << B[N-2] << endl;
		else cout << B.back() << endl;
	}



	return 0;

}
