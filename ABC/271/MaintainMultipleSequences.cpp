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

	ll N, Q; cin >> N >> Q;
	vector<vector<int> > a(N);
	REP(i,N){
		int L; cin >> L;
		a[i].resize(L);
		REP(j,L){
			cin >> a[i][j];
		}
	}

	REP(i,Q){
		int s, t; cin >> s >> t;
		cout << a[s-1][t-1] << endl;
	}


	return 0;

}
