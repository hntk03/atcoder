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

const ll INF = 1e18;

int main(void){

	int N, Q; cin >> N >> Q;
	vector<ll> a(N);
	REP(i,N) cin >> a[i];

	sort(a.begin(), a.end());

	REP(qi,Q){
		int b, k; cin >> b >> k;
		auto f = [&](int wj) -> bool{
			int l = b-wj, r = b+wj;
			int li = lower_bound(a.begin(), a.end(), l) - a.begin();
			int ri = lower_bound(a.begin(), a.end(), r+1) - a.begin();
			return (ri - li) >= k;
		};

		int ac = 2e8, wa = -1;
		while(wa+1<ac){
			int wj = (wa+ac) / 2;
			if(f(wj)) ac = wj;
			else wa = wj;
		}
		cout << ac << endl;
	}

	return 0;
}
