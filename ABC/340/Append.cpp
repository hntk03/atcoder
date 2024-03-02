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

	int Q; cin >> Q;
	vector<int> v;
	REP(i,Q){
		int q, x; cin >> q >> x;

		if(q == 1) v.push_back(x);
		else cout << v[v.size()-x] << endl;
	}


	return 0;

}
