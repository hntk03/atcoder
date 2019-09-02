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
	vector<int> H(N, 0);
	vector<int> a(N, 0);


	REP(i,N) cin >> H[i];

	FOR(i,1,N){
		if(H[i] <= H[i-1]) a[i] = a[i-1] + 1;
	}

	int ans = 0;
	REP(i,N+1){
		ans = max(ans, a[i]);
	}

	cout << ans << endl;

	return 0;

}
