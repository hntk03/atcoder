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

	int N, M; cin >> N >> M;
	vector<vector<int> > data(M, vector<int>(N, 0));
	vector<vector<bool> > graph(N, vector<bool>(N, false));


	REP(i,M){
		REP(j,N){
			int a; cin >> a;
			data[i][j] = a - 1;
		}
	}

	REP(i,M){
		REP(j,N-1){
			int x = data[i][j];
			int y = data[i][j+1];
			graph[x][y] = true;
			graph[y][x] = true;
		}
	}


	int cnt = 0;
	REP(i,N){
		REP(j,N){
			if(i == j) continue;
			if(graph[i][j]) continue;
			cnt++;
		}
	}

	cout << cnt/2 << endl;


	return 0;

}
