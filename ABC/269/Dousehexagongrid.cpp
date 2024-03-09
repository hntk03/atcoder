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

int N;
vector<int> X, Y;

int M = 2001;
vector<vector<bool> > visited(M, vector<bool>(M, false));
vector<vector<bool> > grid(M, vector<bool>(M, false));

int ans = 0;


void dfs(int i, int j){
	if(i < 0 || j < 0) return;
	if(i > (M-1) || j > (M-1)) return;
	if(!grid[i][j]) return;
	if(visited[i][j]) return;

	visited[i][j] = true;

	dfs(i-1, j-1);
	dfs(i-1, j);
	dfs(i, j-1);
	dfs(i, j+1);
	dfs(i+1, j);
	dfs(i+1, j+1);

}

int main(void){

	cin >> N;	
	REP(i,N){
		int X, Y; cin >> X >> Y;
		X += 1000;
		Y += 1000;
		grid[X][Y] = true;
	}

	REP(i,M){
		REP(j,M){
			if(grid[i][j] and !visited[i][j]){
				dfs(i, j);
				ans++;
			}
		}
	}

	cout << ans << endl;

	return 0;

}
