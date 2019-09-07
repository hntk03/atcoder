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
	vector<int> B(N-1);

	REP(i,N-1) cin >> B[i];


	ll ans = B[0] + B[N-2];

	REP(i,N-2){
		ans += min(B[i], B[i+1]);
	}

	cout << ans << endl;

	return 0;

	}
