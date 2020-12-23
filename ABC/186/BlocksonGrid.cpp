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

	int H, W; cin >> H >> W;
	int A[105][105];
	REP(i,H) REP(j,W) cin >> A[i][j];

	int min_value = 1000;
	REP(i,H) REP(j,W) min_value = min(min_value, A[i][j]);

	int ans = 0;
	REP(i,H) REP(j,W) if(min_value != A[i][j]) ans += A[i][j] - min_value;

	cout << ans << endl;

	return 0;

}
