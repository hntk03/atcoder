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
vector<string> S;
vector<vector<bool>> visited;
string X = "snuke";
bool ans = false;

void dfs(int i, int j, int cnt){
	if(i < 0 or j < 0 or i == H or j == W) return;
	if(visited[i][j]) return;
	if(S[i][j] != X[cnt%X.size()]) return ;
	if(i == H-1 and j == W-1){
		ans = true;
	}

	visited[i][j] = true;

	dfs(i+1, j, cnt+1);
	dfs(i-1, j, cnt+1);
	dfs(i, j+1, cnt+1);
	dfs(i, j-1, cnt+1);
}

int main(void){

	cin >> H >> W;	
	S.resize(H);
	REP(i,H) cin >> S[i];

	visited.assign(H, vector<bool>(W, false));

	dfs(0, 0, 0);

	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
