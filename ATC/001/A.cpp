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


int H, W;
const int MAX = 501;
vector<string> c(MAX);
bool reached[MAX][MAX];
bool ans = false;

void dfs(int x, int y){

	if(x < 0 or x >= H or y < 0 or y >= W or c[x][y] == '#') return;
	if(reached[x][y] == true) return;
	if(c[x][y] == 'g') ans = true;

	reached[x][y] = true;

	dfs(x+1, y);
	dfs(x-1, y);
	dfs(x, y+1);
	dfs(x, y-1);

}

int main(void){

	cin >> H >> W;
	REP(i,H) cin >> c[i];

	int x, y;

	REP(i,H) REP(j,W) reached[i][j] = false;
	REP(i,H){
		REP(j,W){
			if(c[i][j] == 's' ){
				x = i;
				y = j;
			}
		}
	}

	dfs(x,y);

	cout << (ans ? "Yes" : "No") << endl;




	return 0;

}
