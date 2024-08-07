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

	ll N, D, P; cin >> N >> D >> P;
	vector<ll> F(N);

	ll sum = 0;
	REP(i,N){
		cin >> F[i];
		sum += F[i];
	}

	sort(F.begin(), F.end());

	ll ans = sum;
	ll cnt = (N+D-1) / D;
	REP(i,cnt){
		REP(j,D){
			if(F.size() == 0) continue;
			sum -= F.back();
			F.pop_back();
		}
		sum += P;
		ans = min(ans, sum);
	}

	cout << ans << endl;

	return 0;

}
