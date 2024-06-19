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

	int N; cin >> N;

	vector<vector<int> > grid(N, vector<int>(N, -1));

	int c = (N+1)/2-1;
	grid[c][c] = 0;

	int di[] = {0, 1,  0, -1};
	int dj[] = {1, 0, -1, 0};

	int direction = 0;

	int i = 0, j = 0;
	REP(cnt,N*N-1){
		int ni = i + di[direction];
		int nj = j + dj[direction];
		if(ni == -1 or nj == -1 or ni == N or nj == N or grid[ni][nj] != -1){
			direction++;
			direction %= 4;
		}

		grid[i][j] = cnt+1;
		i += di[direction];
		j += dj[direction];
	}

	REP(i,N){
		REP(j,N){
			if(grid[i][j] == 0) cout << "T" << " ";
			else cout << grid[i][j] << " ";
		}
		cout << endl;
	}

	return 0;

}
