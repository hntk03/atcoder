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

int H, W;
ll A[11][11];
int ans = 0;

void dfs(int i, int j, set<ll> r){
	if(i < 0 or j < 0 or i >= H or j >= W) return;
	if(r.count(A[i][j])) return;
	if(i == H-1 and j == W-1){
		ans++;
		return;
	}

	r.insert(A[i][j]);

	dfs(i+1, j, r);
	dfs(i, j+1, r);

}

int main(void){

	cin >> H >> W;	
	REP(i,H){
		REP(j,W){
			cin >> A[i][j];
	}
	}

	dfs(0, 0, set<ll>());
	cout << ans << endl;

	return 0;

}
