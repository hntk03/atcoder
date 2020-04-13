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

	
	ll N; cin >> N;

	ll ans = 0;
	FOR(i,1,N+1){
		if(i%3 == 0 and i%5 == 0) continue;
		else if(i%3 == 0) continue;
		else if(i%5 == 0) continue;
		else ans += i;
	}

	cout << ans << endl;

	return 0;

}
