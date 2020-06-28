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

ll AB[2][200005];
ll ans = 0;
ll N, M, K;

void dfs1(ll sum, int y, int x, ll cnt){
	pv(x); pv(y);
	if(sum <= K) ans = max(ans, cnt);
	if(x == 0 and y == N) return;
	if(x == 1 and y == M) return;
	if(x > 1) return;

	if(x == 0){
		dfs1(sum+AB[x][y], y, x+1, cnt+1);
		dfs1(sum+AB[x][y], y+1, x, cnt+1);

	}else if(x == 1){
		dfs1(sum+AB[x][y], y+1, x, cnt+1);
		dfs1(sum+AB[x][y], y, x-1, cnt+1);
	}

	return;

}

int main(void){

	cin >> N >> M >> K;

	REP(i,N) cin >> AB[0][i];
	REP(i,M) cin >> AB[1][i];
	dfs1(AB[0][0], 1, 1, 1);
//dfs(AB[1][0], 1, 0, 1);

	cout << ans << endl;

	return 0;

}
