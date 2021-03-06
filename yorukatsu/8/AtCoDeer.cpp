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

	int N, K; cin >> N >> K;

	ll ans = 1;
	REP(i,N){
		if(i == 0) ans *= K;
		else ans *= (K-1);
	}

	cout << ans << endl;


	return 0;

}
