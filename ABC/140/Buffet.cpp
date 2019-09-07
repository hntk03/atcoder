#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	int N; cin >> N;
	vector<int> A(N);
	vector<int> B(N);
	vector<int> C(N-1);

	REP(i,N) cin >> A[i];
	REP(i,N) cin >> B[i];
	REP(i,N-1) cin >> C[i];

	int prev = -1;

	int ans = 0;

	REP(i,N){
		int idx = A[i] - 1;
		ans += B[idx];
		
		if(idx == (prev + 1)) ans += C[prev];
		prev = idx;
	}

	cout << ans << endl;

	return 0;

}
