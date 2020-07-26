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

	int X; cin >> X;

	int ans;
	if(X >= 400 and X < 600) ans = 8;
	if(X >= 600 and X < 800) ans = 7;
	if(X >= 800 and X < 1000) ans = 6;
	if(X >= 1000 and X < 1200) ans = 5;
	if(X >= 1200 and X < 1400) ans = 4;
	if(X >= 1400 and X < 1600) ans = 3;
	if(X >= 1600 and X < 1800) ans = 2;
	if(X >= 1800 and X < 2000) ans = 1;

	cout << ans << endl;

	return 0;

}
