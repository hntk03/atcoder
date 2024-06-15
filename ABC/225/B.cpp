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
	vector<vector<int> > g(N);

	REP(i,N-1){
		int a, b; cin >> a >> b;
		a--; b--;

		g[a].push_back(b);
		g[b].push_back(a);

	}

	map<int, int> mp;
	REP(i,N) mp[g[i].size()]++;

	bool ans = (mp[1] == (N-1)) and (mp[N-1] == 1);

	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
