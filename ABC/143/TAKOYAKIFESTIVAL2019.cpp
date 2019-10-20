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
	vector<int> d(N);

	REP(i,N) cin >> d[i];

	int ans = 0;
	REP(i,N-1){
		FOR(j,i+1,N){
			ans += d[i] * d[j];
		}
	}

	cout << ans << endl;

	return 0;

}
