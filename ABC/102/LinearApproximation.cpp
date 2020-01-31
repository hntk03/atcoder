#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 1e9;

int main(void){


	int N; cin >> N;
	vector<int> A(N);

	REP(i,N){ 
		int a; cin >> a;
		A[i] = a - (i+1);
	}

	SORT(A);
	ll ans = 0;

	int b = A[N/2];
	REP(i,N){
		ans += abs(A[i] - b);
	}

	cout << ans << endl;

	return 0;

}
