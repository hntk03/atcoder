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

	int N = 9;
	vector<string> S(N);
	REP(i,N) cin >> S[i];

	set<pair<int, int> > st;
	vector<pair<int, int> > ps;

	REP(i,N){
		REP(j,N){
			if(S[i][j] == '#'){
				st.emplace(i,j);
				ps.emplace_back(i, j);
			}
		}
	}

	int n = ps.size();
	int ans = 0;
	REP(ai,n){
		REP(bi,n){
			if(ai == bi) continue;
			pair<int, int> a = ps[ai], b = ps[bi];
			int di = b.first - a.first;
			int dj = b.second - a.second;
			pair<int, int> c(b.first-dj, b.second+di);
			pair<int, int> d(c.first-di, c.second-dj);
			if(st.count(c) and st.count(d)) ans++;
		}
	}

	ans /= 4;
	cout << ans << endl;

	return 0;

}
