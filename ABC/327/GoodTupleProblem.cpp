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

vector<vector<int> > g;

vector<int> input(int M){
	vector<int> x(M);
	REP(i,M){
		int d; cin >> d;
		d--;
		x[i] = d;
	}

	return x;
}

void dfs(int v, int num, vector<int> &X){
	if(X[v] != -1) return ;

	X[v] = num;
	REP(i,g[v].size()){
		dfs(g[v][i], !num, X);
	}
}

int main(void){

	int N, M; cin >> N >> M;	
	vector<int> A = input(M), B = input(M);

	g.resize(N);

	REP(i,M){
		g[A[i]].push_back(B[i]);
		g[B[i]].push_back(A[i]);
	}

	vector<int> X(N, -1);

	REP(i,N){
		if(X[i] != -1) continue;
		dfs(i,0,X);
	}

	bool ans = true;
	REP(i,M){
		if(X[A[i]] == X[B[i]]) ans = false;
	}

	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
