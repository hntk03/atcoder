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
	vector<vector<int>> ga(N, vector<int>(N));
	vector<vector<int>> gb(N, vector<int>(N));
	
	REP(i,M){
		int a, b; cin >> a >> b;
		a--; b--;
		ga[a][b] = ga[b][a] = 1;
	}

	REP(i,M){
		int a, b; cin >> a >> b;
		a--; b--;
		gb[a][b] = gb[b][a] = 1;
	}

	vector<int> p(N);
	REP(i,N) p[i] = i;
	do{
		vector<vector<int>> g(N, vector<int>(N));
		REP(i,N){
			REP(j,N){
				g[i][j] = ga[p[i]][p[j]];
			}
		}

		if(g == gb){
			cout << "Yes" << endl;
			return 0;
		}

	}while(next_permutation(p.begin(), p.end()));

	cout << "No" << endl;
	return 0;

}
