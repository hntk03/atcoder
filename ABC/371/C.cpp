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

vector<vector<bool>> inputGraph(int n){
	vector<vector<bool>> g(n, vector<bool>(n));
	int M; cin >> M;
	REP(i,M){
		int a, b; cin >> a >> b;
		a--; b--;
		g[a][b] = true;
		g[b][a] = true;
	}

	return g;
}

const int INF = 1e9;

int main(void){

	int N; cin >> N;
	auto g = inputGraph(N);
	auto h = inputGraph(N);
	vector<vector<int>> A(N, vector<int>(N));

	REP(i,N){
		REP(j,N){
			if(j > i){
				cin >> A[i][j];
				A[j][i] = A[i][j];
			}
		}
	}

	int ans = 1e9;
	vector<int> p(N);
	REP(i,N) p[i] = i;


	do{
		int now = 0;
		REP(i,N){
			REP(j,i){
				if(h[i][j] != g[p[i]][p[j]]){
					now += A[i][j];
				}
			}
		}
		ans = min(ans, now);
	}while(next_permutation(p.begin(), p.end()));

	cout << ans << endl;

	return 0;

}
