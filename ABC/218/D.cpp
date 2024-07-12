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
	vector<int> x(N), y(N);
	REP(i,N) cin >> x[i] >> y[i];

	set<pair<int, int>> st;
	REP(i,N) st.insert(make_pair(x[i], y[i]));

	int ans = 0;
	REP(i,N){
		REP(j,N){
			if(i == j) continue;
			int xi = x[i], xj = x[j];
			int yi = y[i], yj = y[j];
			if(xi < xj and yi < yj){
				if(st.find(make_pair(xi,yj)) == st.end()) continue;
				if(st.find(make_pair(xj,yi)) == st.end()) continue;
				ans++;
			}
		}
	}

	cout << ans << endl;

	return 0;

}
