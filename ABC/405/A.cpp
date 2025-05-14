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

	int R, X; cin >> R >> X;

	bool ans = false;
	if(1600 <= R and R <= 2999 and X == 1) ans = true;
	else if(1200 <= R and R <= 2399 and X == 2) ans = true;
	else ans = false;

	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
