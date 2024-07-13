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
	vector<ll> L(N), R(N);
	REP(i,N) cin >> L[i] >> R[i];

	ll sumL = 0, sumR = 0;
	REP(i,N) sumL += L[i];
	REP(i,N) sumR += R[i];

	if(sumL > 0 or sumR < 0){
		cout << "No" << endl;
		return 0;
	}

	vector<ll> ans = L;
	ll rem = -sumL;
	REP(i,N){
		ll d = min(rem, R[i]-L[i]);
		ans[i] += d;
		rem -= d;
	}

	cout << "Yes" << endl;
	REP(i,N) cout << ans[i] << " ";
	cout << endl;

	return 0;
}
