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

	int X, Y; cin >> X >> Y;

	int ans = 0;
	if(X == 3) ans += 100000;
	if(X == 2) ans += 200000;
	if(X == 1) ans += 300000;
  
	if(Y == 3) ans += 100000;
	if(Y == 2) ans += 200000;
	if(Y == 1) ans += 300000;
  
	if(X == 1 and Y == 1) ans += 400000;

	cout << ans << endl;





	return 0;

}
