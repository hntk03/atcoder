#include <stdio.h>
#include <cmath>
#include <bits/stdc++.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 1 << 30;
const int MAX = 51;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
int d[MAX][MAX];
char m[MAX][MAX];
int sx, sy, gx, gy;
int R, C;

int bfs(){

	queue<pair<int, int>> q;
	q.push(make_pair(sx, sy));
	d[sx][sy] = 0;
	while(!q.empty()){
		pair<int, int> p = q.front();
		q.pop();

		REP(i,4){
			int x, y;
			x = p.first + dx[i];
			y = p.second + dy[i];

			if(0 <= x and x <= R and 0 <= y and y <= C ){
				if(d[x][y] == INF and m[x][y] == '.'){
					d[x][y] = d[p.first][p.second] + 1;
					q.push(make_pair(x, y));
				}
			}
		}


	}

	return d[gx][gy];

}



int main(void){

	cin >> R >> C;
	cin >> sx >> sy >> gx >> gy;
	sx--; sy--; gx--; gy--;

	REP(i,R){
		REP(j,C){
			cin >> m[i][j];
			d[i][j] = INF;
		}
	}
	
	int ans = bfs();
	cout << ans << endl;
	

	return 0;

}
