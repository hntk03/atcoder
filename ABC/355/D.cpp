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
	vector<pair<int, int> > p;

	REP(i,N){
		int L, R; cin >> L >> R;
		p.emplace_back(L, 0);
		p.emplace_back(R, 1);
	}

	sort(p.begin(), p.end());
	int rs = 0;
	ll ans = N*ll(N-1)/2;
	for(pair<int, int> x : p){
		if(x.second == 0) ans -= rs;
		else rs++;
	}

	cout << ans << endl;

	return 0;

}
