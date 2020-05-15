#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

int main(void){

	int N, M; cin >> N >> M;
	vector<bool> one(N, false);
	vector<bool> two(N, false);

	REP(i,M){
		int a, b; cin >> a >> b;
		a--; b--;
		if(a == 0) one[b] = true;
		else if(b == (N-1)) two[a] = true;
	}

	bool ok = false;

	REP(i,N){
		if(one[i] and two[i]) ok = true;
	}

	if(ok) cout << "POSSIBLE" << endl;
	else cout << "IMPOSSIBLE" << endl;


	return 0;

}
