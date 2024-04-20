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
	vector<set<int> > v(M);

	REP(i,M){
		int C; cin >> C;
		REP(j,C){
			int a; cin >> a;
			v[i].insert(a);
		}
	}

	int ans = 0;
	FOR(i,1,1<<M){
		set<int> now;
		REP(j,M){
			if(i>>j&1){
				for(auto x : v[j]){
					now.insert(x);
				}
			}
		}
		if(now.size() == N) ans++;
	}

	cout << ans << endl;
	return 0;

}
