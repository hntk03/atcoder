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
	vector<set<int>> g(N);
	REP(i,N-1){
		int a, b; cin >> a >> b;
		a--; b--;
		g[a].insert(b);
		g[b].insert(a);
	}
	
	REP(i,N){
		if(g[i].size() == N-1){
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;
	return 0;

}
