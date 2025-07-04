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
	vector<int> walls(N+1);

	REP(i,M){
		int L, R; cin >> L >> R;
		L--;
		R--;

		walls[L]++;
		walls[R+1]--;
	}

  REP(i,N) walls[i+1] += walls[i];

	int ans = INF;
	REP(i,N) ans = min(ans, walls[i]);

	cout << ans << endl;
	return 0;

}
