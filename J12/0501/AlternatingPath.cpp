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

int H, W;
char S[402][402];
bool visited[402][402];

ll ans = 0;

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

int white = 0;
int black = 0;

void dfs(int y, int x){

	if(visited[y][x]) return ;
	if(S[y][x] == '.') white++;
	if(S[y][x] == '#') black++;

	visited[y][x] = true;

	REP(i,4){
		int h = y + dy[i];
		int w = x + dx[i];
		if(h >= 0 and h < H and w >= 0 and w < W and S[y][x] != S[h][w]){
			dfs(h, w);
		}
	}

	return ;

}


int main(void){

	cin >> H >> W;
	REP(i,H) REP(j,W) cin >> S[i][j];
	REP(i,H) REP(j,W) visited[i][j] = false;
	REP(i,H){
		REP(j,W){
			white = 0;
			black = 0;
			dfs(i,j);
			ans += white * black;
		}
	}

	cout << ans << endl;



	return 0;

}
