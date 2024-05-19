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
	vector<int> a(N);
	REP(i,N) cin >> a[i];

	int cnt = 0;
	vector<int> same(N);
	for(int i=N-1;i>=0;i--){
		if(a[i] == i+1) same[i] = cnt++;
		else same[i] = 0;
	}
	ll ans = 0;
	REP(i,N) ans += same[i];

	set<pair<int, int> > st;
	REP(i,N){
		if(a[i] == i+1) continue;
		int to = a[i]-1;
		if(a[to] == (i+1) and a[i] == (to+1)){
			int a = min(i, to);
			int b = max(i, to);
			st.insert(make_pair(a, b));
		}
	}

  ans += st.size();

	cout << ans << endl;
	return 0;

}
