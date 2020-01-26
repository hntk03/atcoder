#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){


	ll L, R; cin >> L >> R;
	
	R = min(R, L+4038);

	int ans = 2018;

	for(ll i = L; i <= R; i++){
		for(ll j = i+1; j <= R; j++){
			int x = i*j%2019;
			ans = min(ans, x);
		}
	}


	cout << ans << endl;

	return 0;

}
