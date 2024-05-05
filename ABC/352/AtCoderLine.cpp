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

	int N, X, Y, Z; cin >> N >> X >> Y >> Z;		

	int minValue = min(X, Y);
	int maxValue = max(X, Y);
	bool ans = (minValue < Z and Z < maxValue);
	
	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
