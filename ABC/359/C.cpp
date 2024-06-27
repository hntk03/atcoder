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

	ll sx, sy, tx, ty; cin >> sx >> sy >> tx >> ty;

	if((sx+sy)%2 == 1) sx--;
	if((tx+ty)%2 == 1) tx--;

	ll x = abs(tx-sx), y = abs(ty-sy);

	ll ans = 0;
	if(x < y) ans = y;
	else ans = (x+y)/2;

	cout << ans << endl;

	return 0;

}
