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

	vector<pair<int, int> > v;
	REP(i,N){
		int A; cin >> A;
		v.push_back(make_pair(A, 1));
	}

	REP(i,M){
		int B; cin >> B;
		v.push_back(make_pair(B, 2));
	}

	sort(v.begin(), v.end());

	bool ans = false;
	REP(i,N+M-1){
		if(v[i].second == 1 and v[i+1].second == 1) ans = true;
	}

	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
