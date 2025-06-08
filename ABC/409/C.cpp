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

	int N, L; cin >> N >> L;
	vector<int> P(L);
	vector<int> d(N-1);
	REP(i,N-1) cin >> d[i];

	int now = 0;
	P[now]++;
	REP(i,N-1){
		now += d[i];
		now %= L;
		P[now]++;
	}

	if(L%3 != 0){
		cout << 0 << endl;
		return 0;
	}

	int interval = (L / 3);

	ll ans = 0;
	REP(i,L){
		int a = i;
		int b = (a+interval) % L;
		int c = (b+interval) % L;

		if(c < a) break;
		ans += (ll)P[a] * (ll)P[b] * (ll)P[c];
	}

	cout << ans << endl;
	return 0;

}
