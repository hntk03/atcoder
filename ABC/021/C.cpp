#include <bits/stdc++.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


#define N_MAX 101

bool graph[N_MAX][N_MAX];
int N, M;
int a, b;

int main(void){

	cin >> N;
	cin >> a >> b;
	cin >> M;

	REP(i,N){
		REP(j,N){
			graph[i][j] = false;
		}
	}


	REP(i,M){
		int x, y; cin >> x >> y; x--; y--;
		graph[x][y] = true;
		graph[y][x] = true;
	}


	return 0;

}
