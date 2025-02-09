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
	vector<int> P(N), Q(N);

	REP(i,N) cin >> P[i];
	REP(i,N) cin >> Q[i];

	vector<pair<int, int>> vp;
	vector<int> z(N+1);
	REP(i,N){
		vp.push_back(make_pair(Q[i], P[i]));
		z[i] = Q[i];
	}
	sort(vp.begin(), vp.end());
	
	REP(i,N){
		int p = vp[i].second;
		p--;
		cout << z[p] << " ";
	}
	cout << endl;


	return 0;

}
