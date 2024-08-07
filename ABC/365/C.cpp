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

	int N;
  ll M; cin >> N >> M;
	vector<ll> A(N);
	REP(i,N) cin >> A[i];
	ll sum = accumulate(A.begin(), A.end(), 0ll);

	if(sum <= M){
		cout << "infinite" << endl;
		return 0;
	}
	
	ll l = 0, r = 1e18;
	while(abs(l-r)>1){
		ll c = (l+r)/2;
		ll now = 0;
		REP(i,N) now += min(A[i], c);
		if(now <= M) l = c;
		else r = c;
	}

	cout << l << endl;
	return 0;

}
