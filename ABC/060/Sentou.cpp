#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	int N, T; cin >> N >> T;
	vector<int> t(N);
	REP(i,N) cin >> t[i];

	int ans = 0;
	FOR(i,1,N){
		if(t[i]-t[i-1] > T) ans += T;
		else ans += t[i] - t[i-1];
	}
	ans += T;
	
	cout << ans << endl;


	return 0;

}
