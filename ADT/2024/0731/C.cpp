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

	int N, K; cin >> N >> K;
	map<int, bool> hasLight;
	REP(i,K){
		int A; cin >> A;
		A--;
		hasLight[A] = true;
	}

	vector<pair<ll, ll>> v(N);
	REP(i,N) cin >> v[i].first >> v[i].second;

	vector<ll> R;
	REP(i,N){
		if(hasLight[i]) continue;
		vector<ll> d;
		REP(j,N){
			if(i == j) continue;
			if(!hasLight[j]) continue;
			ll dx = v[i].first - v[j].first;
			ll dy = v[i].second - v[j].second;
			d.push_back(dx*dx+dy*dy);
		}
		sort(d.begin(), d.end());
		R.push_back(d.front());
	}

	sort(R.begin(), R.end());
	printf("%.10f\n", sqrt(R.back()));

	return 0;

}
