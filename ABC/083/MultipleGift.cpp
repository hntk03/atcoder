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

	ll X, Y; cin >> X >> Y;

	ll tmp = X;
	ll ans = 0;
	while(tmp <= Y){
		ans++;
		tmp *= 2;
	}
	cout << ans << endl;


	return 0;

}
