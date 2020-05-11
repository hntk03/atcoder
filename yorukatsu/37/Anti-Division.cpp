#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;



int main(void){

	ll A, B, C, D; cin >> A >> B >> C >> D;

	ll ans = B - B/C - B/D + B/(C*D);
	ans -= (A-1) / C  + (A-1) / D - (A-1) /(C*D);

	cout << ans << endl;

	return 0;

}
