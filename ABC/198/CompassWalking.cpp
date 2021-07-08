#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())
#define all(a) (a).begin(), (a).end()

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

int main(void){

	ll r, x, y; cin >> r >> x >> y;
	ll d2 = x*x + y*y;
	
	ll ans = 1;
	while(1){
		if(r*r*ans*ans >= d2) break;
		++ans;
	}

	if(ans == 1){
		if(r*r != d2) ans = 2;
	}

	cout << ans << endl;




	return 0;

}
