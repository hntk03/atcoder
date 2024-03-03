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

	int N, Q; cin >> N >> Q;	
	vector<int> R(N);

	for(auto &r : R) cin >> r;
	sort(R.begin(), R.end());

	vector<ll> query(Q);
	for(auto &q : query) cin >> q;

	vector<ll> sum(N);
	sum[0] = R[0];

	FOR(i,1,N) sum[i] = sum[i-1] + R[i];

	for(auto x : query){
		auto it = upper_bound(sum.begin(), sum.end(), x);
		cout << it - sum.begin() << endl;
	}

	return 0;

}
